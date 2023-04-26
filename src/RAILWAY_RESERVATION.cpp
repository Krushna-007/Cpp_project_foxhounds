/*
        This Program was Developed by KP7 ~ 22AIML028, 22AIML026, 22AIML032
*/

#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<windows.h>
using namespace std;

class Reservation
{
    int pnr,train_no,age;
    string name,from,to,date,clas;
public:
    void booking(); //function for booking a ticket
    void cancellation(); //function for cancelling a ticket
    void display(); //function to display the reservation details
};

void Reservation::booking()
{
    cout << "\nEnter The Following Details For Booking A Ticket : ";
    cout << "\n\nPNR NUMBER : ";cin>>pnr;
    cout << "Name Of The Passenger : ";cin>>name;
    cout << "Age Of The Passenger : ";cin>>age;
    cout << "From Destination : ";cin>>from;
    cout << "To Destination: : ";cin>>to;
    cout << "Date Of The Journey : ";cin>>date;
    cout << "Class For Traveling : ";cin>>clas;
    cout << "Train Number : ";cin>>train_no;
    cout << "\nTicket Booked Successfully!, Thank You for Being with us!!";
}

void Reservation::cancellation()
{
    int cancel_pnr;
    cout<<"\nEnter PNR Number to Cancel Ticket : ";
    cin>>cancel_pnr;
    if(cancel_pnr==pnr)
    {
        pnr=0;
        name="";
        age=0;
        from="";
        to="";
        date="";
        clas="";
        train_no=0;
        cout<<"\nTicket Canceled Successfully!";
    }
    else
        cout<<"\nInvalid PNR number!";
}

void Reservation::display()
{
    cout<<"\nPNR NUMBER is : "<<pnr;
    cout<<"\nName Of The Passenger is : "<<name;
    cout<<"\nAge Of The Passenger is : "<<age;
    cout<<"\nFrom Destination : "<<from;
    cout<<"\nTo Destination: "<<to;
    cout<<"\nDate Of the Journey is : "<<date;
    cout<<"\nClass is : "<<clas;
    cout<<"\nTrain Number is : "<<train_no;
}

int main()
{
    system("Color E4");
    Reservation res;
    int choice;
    while(1)
    {
        cout << "\n\n\n\n***************************************************\n";
        cout << "******* CHARUSAT RAILWAY RESERVATION SYSTEM *******\n";
        cout << "******* BY 22AIML028, 22AIML026, 22AIML032 ********\n";
        cout << "***************************************************\n";
        cout << "\n\n<<<<<<<<<<WELCOME USER>>>>>>>>>>\n";
        cout << "\n[1] BOOK TICKET\n";
        cout << "\n[2] CANCEL TICKET\n";
        cout << "\n[3] VIEW TICKET INFORMATION\n";
        cout << "\n[4] EXIT\n";
        cout << "***********************************************\n";
        cout << "\nENTER YOUR CHOICE: ";
        cin >> choice;
        switch(choice)
        {
            case 1: res.booking(); break;
            case 2: res.cancellation(); break;
            case 3: res.display(); break;
            case 4: exit(0); break;
            default: cout<<"\nInvalid Choice!";
        }
    }
    return 0;
}
