#include <iostream>
#include <string>
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

int s, p, l, m, day;
int n;

string arrP[5] = {"Google pay", "Phonepe", "Paytm", "Card", "Cash"};
string arr2[4] = {"PRIME PLUS (Front) Seats", "PRIME Seats", "CLASSIC PLUS Seats", "CLASSIC (Last) seats"};
string arrDay[4] = {"Today", "Tommorow", "Day After Tommorow", "Later"};
string arrLoc[8] = {"INOX: AIPL Joy Street, Gurgaon", "PVR: Anupam Saket", "Miraj Cinemas: M4U, Sahibabad", "MovieMax: Pacific Mall Ghaziabad", "PVR: Vegas Dwarka", "G3S Cinema: Rohini (Newly Renovated)", "Cinepolis: DLF Avenue, Saket", "PVR: Anupam Saket, Delhi"};
string arrSeat[5]; // declared by user

void booking::welcome()
{
    cout << "\n\n{ ~ ~ ~  WELCOME TO MOVIE TICKET BOOKING SYSTEM  ~ ~ ~ }\n\n\n";
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
void booking ::typeofmv()
{
    cout << "What type of movie you prefer?\n1.Action Movie\n2.Romantic Movie \n3.Inspirational movie\n4.Comedy movie\n5.Horror movie\n6.Animation movie\n7.War movie\n8.Mystery movie\n\nPlease Enter the Choice Number : ";
    int a;
    cin >> a;
    cout << "\n\n";

    switch (a)
    {
    case 1:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1.KGF \n2.Bang Bang \n3.Ra-One\n4.Blood Money\n";
        cout << "\nEnter Choice number : ";
        break;
    case 2:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1.Luca \n2.Dora The explorer\n3.Returns of Hanuman\n";
        cout << "\nEnter Choice number : ";
        break;
    case 3:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1. \n2.\n3.\n";
        break;
    case 4:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1.Dream Girl 2 \n2.OMG 2\n3.Golmaal 5\n";
        cout << "\nEnter Choice number : ";
        int d;
        cin >> d;
        cout << "\nMovie selected : Dream Girl 2 \n\n\n";
        break;
    case 5:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1. \n2.\n3.\n";
        break;
    case 6:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1. \n2.\n3.\n";
        break;
    case 7:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1. \n2.\n3.\n";
        break;
    case 8:
        cout << "The Most Trendy Movies nowdays are : " << endl;
        cout << "\n1.Spy \n2.V1\n3.The Prestige\n";
        cout << "\nEnter Choice number : ";
        break;
    default:
        cout << "Please enter valid number : ";
        cin >> a;
        break;
    }
}

void booking ::cost()
{
    cout << "The Cost of your choosen Movie Ticket per seat is Rs 250.\nSo,your Total cost is : Rs " << s * 250 << "\n\n";
    // Thanks! Hope to see you back soon :)
}
void booking ::inputSeats()
{
    // string arr2[] = {"PRIME PLUS (Front) Seats", "PRIME Seats", "CLASSIC PLUS Seats", "CLASSIC (Last) seats"};
    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << "." << arr2[i] << endl;
    }
    cout << "\nEnter Choice number : ";
    // int m;
    cin >> m;
    cout << "\n";
    cout << "What are the required no. of seats? : ";
    // int s;
    cin >> s;
    cout << "\nAvailable seats are :-\n";
    string arrS[13] = {"A3", "A4", "A5", "D9", "D10", "D11", "D12", "G5", "G6", "H4", "K1", "K2", "L9"};
    for (int i = 0; i < 12; i++)
    {
        cout << i + 1 << "." << arrS[i] << endl;
    }

    cout << "Type the Seat names you want to Book : \n";
    // string arrSeat[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arrSeat[i];
    }
    cout << "\n";
}
void booking ::location()
{
    cout << "Which location do you prefer? : \n\n";

    for (int i = 0; i < 8; i++)
    {
        cout << i + 1 << "." << arrLoc[i] << endl;
    }
    cout << "\nEnter Choice number : ";
    // int l;
    cin >> l;
    cout << "\n";
    // cout << "\nOkay! Now go for other details.\n\n";
    cout << "Location selected : " << arrLoc[l - 1] << "\n\n\n";
}

void booking ::showticket()
{

    cout << "Please Enter your Name  : ";
    string name;
    cin >> name;
    cout << "\nCongratulations! " << name << ", Your Movie ticket has been booked for " << arrDay[day - 1] << endl
         << endl;
    cout << "Movie Ticket Information - \n\n";
    cout << "Name                    :" << name;
    cout << "\nLocation selected       : " << arrLoc[l - 1] << endl;
    cout << "Movie chosen            : "
         << "Comedy Movie - Dream Girl 2\n";
    cout << "No. of seats booked     : " << s;
    cout << "\nSeats preferred         : " << arr2[m - 1];
    cout << "\nSeat numbers are        : ";
    for (int i = 0; i < s; i++)
    {
        cout << arrSeat[i] << " ";
    }
    cout << "\nPayment done through    : " << arrP[p - 1] << endl;
    cout << "INR per ticket          : Rs 250" << endl;
    cout << "Total Amount paid       : Rs " << s * 250 << endl;

    cout << "\nTHANKYOU , See you soon!\n\n";
}

int main()
{

    // welcome page
    booking obj1;
    obj1.welcome();

    do
    {

        // ask for type of movie veiwer prefer
        obj1.checkAvailableMovies();

        // int n;
        switch (n)
        {

        case 1:
            obj1.typeofmv();
            // obj1.checkAvailableMovies();
            break;

        case 2:
            cout << "What seats do you prefer? : \n\n";
            obj1.inputSeats();
            cout << "Seats selected : ";
            for (int i = 0; i < s; i++)
            {
                cout << arrSeat[i] << " ";
            }
            cout << "\n\n\n";
            // obj1.checkAvailableMovies();
            // seatinfo();
            break;

        case 3:
        {
            cout << "Booking required for which day? : \n\n";
            // string arrDay[4] = {"Today", "Tommorow", "Day After Tommorow", "Later"};
            for (int i = 0; i < 4; i++)
            {
                cout << i + 1 << "." << arrDay[i] << endl;
            }
            // int day;
            cout << "\n\nEnter Choice number : ";
            cin >> day;
            cout << "\n\n";
            cout << "Day chosen for movie : " << arrDay[day - 1] << "\n\n\n";
            // cout << "\nOkay! Now go for other details.\n\n";
            // obj1.checkAvailableMovies();
            break;
        }
        case 4:
            obj1.location();
            // obj1.checkAvailableMovies();
            break;

        case 5:
            obj1.cost();
            cout << "How would you like to pay?? : \n";

            for (int i = 0; i < 5; i++)
            {
                cout << i + 1 << "." << arrP[i] << endl;
            }
            // int p;
            cout << "\nEnter Choice number : ";
            cin >> p;
            cout << "\nYour Payment has been done through " << arrP[p - 1] << " successfully!\n\n\n";

            // cout << "\nOkay! Now go for other details.\n\n";
            // obj1.checkAvailableMovies();
            break;
        case 6:
            // break;
            // case 7:
            cout << "Your booking has been done successfully!\n\n";
            break;

        default:
            cout << "Please enter valid number.";
            break;
        }
    } while (n != 6);
    obj1.showticket();
}
