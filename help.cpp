
// //this is not my work
// //i just inserted this to take help
// //thus named help.cpp 
// //:)

// #include <iostream>
// #include <vector>
// #include <string>
// #include <iomanip>

// // Constants for the number of rows and columns in the theater
// const int NUM_ROWS = 5;
// const int NUM_COLS = 10;

// // Define a 2D array to represent the theater's seats
// char theater[NUM_ROWS][NUM_COLS];

// // Function to initialize the theater seats
// void initializeTheater()
// {
//         for (int i = 0; i < NUM_ROWS; i++)
//     {
//       for (int j = 0; j < NUM_COLS; j++)
//         {
//                         theater[i][j] = 'O';
//               // 'O' represents an available seat
//        
//         }
//            
//     }
// }

// // Function to display the current status of the theater
// void displayTheater()
// {
//         std::cout << "   ";
//         for (int j = 0; j < NUM_COLS; j++)
//     {
//                 std::cout << std::setw(3) << j + 1;
//            
//     }
//         std::cout << "\n";

//         for (int i = 0; i < NUM_ROWS; i++)
//     {
//                 std::cout << char('A' + i) << " |";
//                 for (int j = 0; j < NUM_COLS; j++)
//         {
//                         std::cout << std::setw(3) << theater[i][j];
//                    
//         }
//                 std::cout << "\n";
//            
//     }
// }

// // Function to book a ticket
// bool bookTicket(std::vector<std::vector<int>> &bookings)
// {
//         char row;
//         int col;

//         std::cout << "Enter the row (A-E) and column (1-10) for your ticket: ";
//         std::cin >> row >> col;

//         // Convert the row character to an array index
//     int rowIndex = row - 'A';

//         // Check if the selected seat is valid
//     if (rowIndex >= 0 && rowIndex < NUM_ROWS && col >= 1 && col <= NUM_COLS)
//     {
//                 if (theater[rowIndex][col - 1] == 'O')
//         {
//                         theater[rowIndex][col - 1] = 'X';
//               // 'X' represents a booked seat
//             bookings.push_back({rowIndex, col - 1});
//                         std::cout << "Ticket booked successfully!\n";
//                         return true;
//                    
//         }
//         else
//         {
//                         std::cout << "Sorry, this seat is already booked. Please choose another seat.\n";
//                         return false;
//                    
//         }
//            
//     }
//     else
//     {
//                 std::cout << "Invalid seat selection. Please try again.\n";
//                 return false;
//            
//     }
// }

// // Function to calculate the total cost of booked tickets
// double calculateTotalCost(const std::vector<std::vector<int>> &bookings, double ticketPrice)
// {
//         return bookings.size() * ticketPrice;
// }

// int main()
// {
//         initializeTheater();
//         std::vector<std::vector<int>> bookings;
//       // Store booked seats as row and column pairs
//     double ticketPrice = 10.0;
//       // Adjust the ticket price as needed

//     int choice;

//         do
//     {
//                 std::cout << "\nMovie Ticket Booking System\n";
//                 std::cout << "1. Display Available Seats\n";
//                 std::cout << "2. Book a Ticket\n";
//                 std::cout << "3. View Booking Details\n";
//                 std::cout << "4. Calculate Total Cost\n";
//                 std::cout << "5. Exit\n";
//                 std::cout << "Enter your choice: ";
//                 std::cin >> choice;

//                 switch (choice)
//         {
//                     case 1:
//                             displayTheater();
//                             break;
//                     case 2:
//                             if (bookTicket(bookings))
//             {
//                                     std::cout << "Current bookings:\n";
//                                     for (const auto &booking : bookings)
//                 {
//                                             char row = 'A' + booking[0];
//                                             int col = booking[1] + 1;
//                                             std::cout << "Row " << row << ", Seat " << col << "\n";
//                                        
//                 }
//                                
//             }
//                             break;
//                     case 3:
//                             std::cout << "Current bookings:\n";
//                             for (const auto &booking : bookings)
//             {
//                                     char row = 'A' + booking[0];
//                                     int col = booking[1] + 1;
//                                     std::cout << "Row " << row << ", Seat " << col << "\n";
//                                
//             }
//                             break;
//                     case 4:
//                             std::cout << "Total Cost: $" << std::fixed << std::setprecision(2)
//                           << calculateTotalCost(bookings, ticketPrice) << "\n";
//                             break;
//                     case 5:
//                             std::cout << "Thank you for using our system. Goodbye!\n";
//                             break;
//                         default :
//                 std::cout << "Invalid choice. Please try again.\n";
//                             break;
//                    
//         }
//            
//     }
//     while (choice != 5)
//         ;

//         return 0;
// }f