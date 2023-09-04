#include <iostream>
using namespace std;

class booking
{
public:
    void welcome();
    void checkAvailableMovies();
    void typeofmv();
    void cost();
    void inputSeats();
    void location();
    void showticket();
};

    
void booking::welcome()
{
    cout << "\n\n{ ~ ~ ~  WELCOME TO MOVIE TICKET BOOKING SYSTEM  ~ ~ ~ }\n\n\n";
}
void booking ::cost()
{
    cout << "The Cost of your choosen Movie Ticket per seat is Rs 350.\n\nThnaks! Hope to see you back soon :)\n\n";
}
void booking::checkAvailableMovies()
{
    cout << "Steps for booking a Movie Ticket :- \n\n";
    cout << " 1.Trendy or latest Movies\n 2.Available Seats\n 3.Select day or date\n 4.Choose Location\n 5.Purchase Ticket\n 6.Quit\n";
    cout << "\nEnter Choice number : ";
    // int n;
    cin >> n;
    cout << "\n\n";
}


int main()
{
    // cout << "\n\n{ ~ ~ ~  WELCOME TO MOVIE TICKET BOOKING SYSTEM  ~ ~ ~ }\n\n\n";

    return 0;
}

