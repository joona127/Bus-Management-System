#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

void mainMenu();

class Management
{
  public:
  Management()
  {
      mainMenu();
  }
};

class Details
{
    public:
    // variables of the class
    static string name, gender;
    int phone;
    int age;
    static int customerId;
    char array[100];

// A method that asks information from the user
    void information()
    {
        cout<<"Enter the customer's id:"<<endl;
        cin>>customerId;
        cout<<"Enter the customer's name:"<<endl;
        cin>>name;
        cout<<"Enter the customer's gender:"<<endl;
        cin>>gender;
        cout<<"Enter the customer's mobile number:"<<endl;
        cin>>phone;
        cout<<"Enter the customer's age:"<<endl;
        cin>>age;
    }
};

int Details::customerId;
string Details::name;
string Details::gender;

// Class for booking the bus
class Booking
{
    public: 
    static int choice;
    int choice1;
    int back;
    static float charges;

    void bus()
    {
        string buses[]={"Paris", "Eindhoven", "Brussels", "Berlin", "Dusseldorf", "Rennes"}; //Array of destinations

        for (int a=0; a < 6; a++) // This for-loop goes through every destination in the array
        {
            cout<<(a+1)<<". A bus to "<<buses[a]<<endl;  // And prints them as a numeric list here
        }

        cout<<"Welcome to FlizzBus!"<<endl;
        cout<<"Press the number of the destination of which you want to go:";
        cin>>choice;

       // switch statement for all different destinations. 
        switch(choice)
        {
            case 1:
            {
                cout<<"Welcome to Paris"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"These are our options to Paris: "<<endl;
                
                // Departures that are available for this destination
                cout<<"1. Departure 9:32"<<endl;
                cout<<"Price: 49 euros, time: 7 h"<<endl;
                cout<<"2. Departure 13:35"<<endl;
                cout<<"Price: 59 euros, time: 7 h"<<endl;
                cout<<"3. Departure 17:45"<<endl;
                cout<<"Price: 55 euros, time: 7 h"<<endl;

                cout<<"Select the bus you want to book"<<endl;
                cin>>choice1;  // User chooses one bus (1-3).

                 // If user chose bus number 1, then this appears...
                if(choice1==1)
                {
                    charges=49;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==2)
                {
                 charges=59;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==3)
                {
                 charges=55;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid key, returning back to the previous menu"<<endl;
                    bus();
                }

                cout<<"Press any key to return back to Main menu: "<<endl;
                cin>>back;

                if (!back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }

            }

            case 2:
            {
                cout<<"Welcome to Eindhoven"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"These are our options to Eindhoven: "<<endl;

                cout<<"1. Departure 9:56"<<endl;
                cout<<"Price: 9 euros, time: 2 h"<<endl;
                cout<<"2. Departure 12:32"<<endl;
                cout<<"Price: 15 euros, time: 2 h"<<endl;
                cout<<"3. Departure 17:45"<<endl;
                cout<<"Price: 11 euros, time: 2 h"<<endl;

                cout<<"Select the bus you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=9;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==2)
                {
                 charges=15;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==3)
                {
                 charges=11;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid key, returning back to the previous menu"<<endl;
                    bus();
                }

                cout<<"Press any key to return back to Main menu: "<<endl;
                cin>>back;

                if (!back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }

            }

            case 3:
            {
                cout<<"Welcome to Brussels"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"These are our options to Brussels: "<<endl;

                cout<<"1. Departure 9:22"<<endl;
                cout<<"Price: 39 euros, time: 3 h"<<endl;
                cout<<"2. Departure 12:52"<<endl;
                cout<<"Price: 43 euros, time: 3 h"<<endl;
                cout<<"3. Departure 17:45"<<endl;
                cout<<"Price: 38 euros, time: 3 h"<<endl;

                cout<<"Select the bus you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=39;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==2)
                {
                 charges=43;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==3)
                {
                 charges=38;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid key, returning back to the previous menu"<<endl;
                    bus();
                }

                cout<<"Press any key to return back to Main menu: "<<endl;
                cin>>back;

                if (!back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }

            }

            case 4:
            {
                cout<<"Welcome to Berlin"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"These are our options to Berlin: "<<endl;

                cout<<"1. Departure 9:32"<<endl;
                cout<<"Price: 55 euros, time: 14 h"<<endl;
                cout<<"2. Departure 11:35"<<endl;
                cout<<"Price: 54 euros, time: 14 h"<<endl;
                cout<<"3. Departure 19:45"<<endl;
                cout<<"Price: 55 euros, time: 14 h"<<endl;

                cout<<"Select the bus you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=49;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==2)
                {
                 charges=59;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==3)
                {
                 charges=55;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid key, returning back to the previous menu"<<endl;
                    bus();
                }

                cout<<"Press any key to return back to Main menu: "<<endl;
                cin>>back;

                if (!back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }

            }

            case 5:
            {
                cout<<"Welcome to Dusseldorf"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"These are our options to Dusseldorf: "<<endl;

                cout<<"1. Departure 6:55"<<endl;
                cout<<"Price: 30 euros, time: 3 h"<<endl;
                cout<<"2. Departure 13:35"<<endl;
                cout<<"Price: 30 euros, time: 3 h"<<endl;
                cout<<"3. Departure 17:45"<<endl;
                cout<<"Price: 32 euros, time: 3 h"<<endl;

                cout<<"Select the bus you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=49;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==2)
                {
                 charges=59;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==3)
                {
                 charges=55;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid key, returning back to the previous menu"<<endl;
                    bus();
                }

                cout<<"Press any key to return back to Main menu: "<<endl;
                cin>>back;

                if (!back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }

            }

            case 6:
            {
                cout<<"Welcome to Rennes"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"These are our options to Rennes: "<<endl;

                cout<<"1. Departure 12:32"<<endl;
                cout<<"Price: 49 euros, time: 13 h"<<endl;
                cout<<"2. Departure 15:00"<<endl;
                cout<<"Price: 59 euros, time: 13 h"<<endl;
                cout<<"3. Departure 17:47"<<endl;
                cout<<"Price: 55 euros, time: 13 h"<<endl;

                cout<<"Select the bus you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=49;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==2)
                {
                 charges=59;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }

                else if(choice1==3)
                {
                 charges=55;
                    cout<<"You have succesfully booked the bus!"<<endl;
                    cout<<"Go back to Main menu and see the ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid key, returning back to the previous menu"<<endl;
                    bus();
                }

                cout<<"Press any key to return back to Main menu: "<<endl;
                cin>>back;

                if (!back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }

            }
            default :
            {
             cout<<"Invalid key, returning back to the Main menu";
            }
            
        }
    }
     
};
float Booking::charges;
int Booking::choice;


// Class for the tickets, inherits variables from Booking and Details- classes.
class Ticket : public Booking, Details
{
    public:

    void Billing()
    {
        // Here we create a file where to store information
        string destination="";
        ofstream outf("records.txt");
        {
            // So this will be all the information in your bus ticket
        outf<<"Customer Id:"<<Details::customerId<<endl;
        outf<<"Customer name:"<<Details::name<<endl;
        outf<<"Customer gender:"<<Details::gender<<endl;
        

        if (Booking::choice==1)
        {
            destination="Paris";
        }
        else if(Booking::choice==2)
        {
            destination="Eindhoven";
        }
        else if(Booking::choice==3)
        {
            destination="Brussels";
        }
        else if(Booking::choice==4)
        {
            destination="Berlin";
        }
        else if(Booking::choice==5)
        {
            destination="Dusseldorf";
        }

        else if(Booking::choice==6)
        {
            destination="Rennes";
        }

        outf<<"Destination: "<<destination<<endl;
        outf<<"Bus costs: "<<Booking::charges<<endl;
    
    }
    outf.close();
}

// This displays the bill
void displayBill()
{
    ifstream ifs("records.txt");
    {
        if(!ifs)
        {
            cout<<"Error on file!"<<endl;
        }
        while(!ifs.eof())
        {
            ifs.getline(array, 100);
            cout<<array<<endl;
        }
    }
    ifs.close();
}
};



void mainMenu()
{
    // Here is everything you see in the main menu.
    int choice1;
    int choice2;
    int choice3;
    int back;

    cout<<"\t________Main Menu________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t"<<endl;

    cout<<"Press 1 to add the Traveler details"<<endl;
    cout<<"Press 2 for booking a bus"<<endl;
    cout<<"Press 3 for tickets and charges"<<endl;
    cout<<"Press 4 to exit"<<endl;

    cout<<"Enter the choice: ";
    cin>>choice1;

    Details details;
    Booking booking;
    Ticket ticket;

    switch(choice1)
    {
        case 1:
        {
            cout<<"Customers"<<endl;
            details.information();
            cout<<"Press 1 to return Main menu"<<endl;
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<<"Book a bus"<<endl;
            booking.bus();
            break;
        }

        case 3:
        {
            cout<<"Get your tickets"<<endl;
            ticket.Billing();

            cout<<"Your ticket is printed"<<endl;
            cout<<"Press 1 to display your ticket";

            cin>>back;

            if(back==1)
            {
                ticket.displayBill();
                cout<<"Press any key to return Main menu"<<endl;
                cin>>back;
                if(!back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
        
        case 4:
        {
            cout<<"Thank you for using our services!"<<endl;
            break;
        }

        default :
        {
            cout<<"Invalid input, please try again"<<endl;
            mainMenu();
            break;
        }
    }
    

}
int main()
{
Management management;
return 0;
}