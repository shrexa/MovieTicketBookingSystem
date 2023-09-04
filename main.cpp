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

int s, p, l, day;
int n;

string arrP[5] = {"Google pay", "Phonepe", "Paytm", "Card", "Cash"};
string arr3[4] = {"Today", "Tommorow", "Day After Tommorow", "Later"};
string arrLoc[8] = {"INOX: AIPL Joy Street, Gurgaon", "PVR: Anupam Saket", "Miraj Cinemas: M4U, Sahibabad", "MovieMax: Pacific Mall Ghaziabad", "PVR: Vegas Dwarka", "G3S Cinema: Rohini (Newly Renovated)", "Cinepolis: DLF Avenue, Saket", "PVR: Anupam Saket, Delhi"};
string arrSeat[5];



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
    cout << "What type of movie you prefer?\n1.Action Movie\n2.Romantic Movie \n3.Inspirational movie\n4.Comedy movie\n5.Horror movie\n6.Animation movie\n7.War movie\n8.Mystery movie\n\n\nPlease Enter the Choice Number : ";
    int a;
    cin >> a;
    cout << "\n\n";

    switch (a)
    {
    case 1:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1.KGF \n2.Bang Bang \n3.Ra-One\n4.Blood Money\n";
        break;
    case 2:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1.Luca \n2.Dora The explorer\n3.Returns of Hanuman\n";
        break;
    case 3:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1. \n2.\n3.\n";
        break;
    case 4:
        cout << "The Most Trendy Movies nowdays in your chosed type are : " << endl;
        cout << "\n1.Dream Girl 2 \n2.OMG 2\n3.Golmaal 5\n";
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
        break;
    default:
        cout << "Please enter valid number : ";
        cin >> a;
        break;
    }
}

void booking ::cost()
{
    cout << "The Cost of your choosen Movie Ticket per seat is Rs 350.\n\nThnaks! Hope to see you back soon :)\n\n";
}
void booking ::inputSeats()
{
    string arr2[] = {"PRIME PLUS (Front) Seats", "PRIME Seats", "CLASSIC PLUS Seats", "CLASSIC (Last) seats"};
    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << "." << arr2[i] << endl;
    }
    cout << "\nEnter Choice number : ";
    int m;
    cin >> m;
    cout << "\n\n";
    cout << "What are the required no. of seats? : ";
    int s;
    cin >> s;

    string arrS[13] = {"A3", "A4", "A5", "D9", "D10", "D11", "D12", "G5", "G6", "H4", "K1", "K2", "L9"};
    for (int i = 0; i < 12; i++)
    {
        cout << i + 1 << "." << arrS[i] << endl;
    }

    cout << "Type the Seat names you want to Book : ";
    // string arrSeat[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arrSeat[i];
    }
}
void booking ::location()
{
    cout << "Which location do you prefer? : \n\n";

    for (int i = 0; i < 8; i++)
    {
        cout << i + 1 << "." << arrLoc[i] << endl;
    }
    cout << "\n\nEnter Choice number : ";
    // int l;
    cin >> l;
    cout << "\nOkay! Now go for other details.\n\n";
    cout << "Your ticket has been booked for " << arrLoc[l - 1] << ",THANKYOU\n";
}

int main()
{
    // welcome page
    booking obj1;
    obj1.welcome();

    // ask for type of movie veiwer prefer
    obj1.checkAvailableMovies();

    return 0;
}
