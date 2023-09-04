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


int n;

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



int main()
{
    // cout << "\n\n{ ~ ~ ~  WELCOME TO MOVIE TICKET BOOKING SYSTEM  ~ ~ ~ }\n\n\n";

    return 0;
}

