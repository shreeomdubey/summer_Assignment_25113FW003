#include<bits/stdc++.h>
using namespace std;

struct Ticket{
    string ticketID;
    string passengerName;
    string destination;
    string seatNumber;
};

int main(){

    vector<Ticket> tickets;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Ticket Booking System =========="<<endl;
        cout<<"1. Book Ticket"<<endl;
        cout<<"2. Display All Tickets"<<endl;
        cout<<"3. Search Ticket"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Ticket t;

            cout<<"Enter Ticket ID: ";
            getline(cin,t.ticketID);

            cout<<"Enter Passenger Name: ";
            getline(cin,t.passengerName);

            cout<<"Enter Destination: ";
            getline(cin,t.destination);

            cout<<"Enter Seat Number: ";
            getline(cin,t.seatNumber);

            tickets.push_back(t);

            cout<<endl<<"Ticket Booked Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(tickets.empty()){
                cout<<endl<<"No Ticket Records Found!"<<endl;
                continue;
            }

            cout<<endl<<"Ticket Records"<<endl;

            for(int i=0;i<tickets.size();i++){

                cout<<endl;
                cout<<"Ticket "<<i+1<<endl;
                cout<<"Ticket ID      : "<<tickets[i].ticketID<<endl;
                cout<<"Passenger Name : "<<tickets[i].passengerName<<endl;
                cout<<"Destination    : "<<tickets[i].destination<<endl;
                cout<<"Seat Number    : "<<tickets[i].seatNumber<<endl;
            }
        }

        else if(choice=="3"){

            string ticketID;
            bool found=false;

            cout<<"Enter Ticket ID to Search: ";
            getline(cin,ticketID);

            for(int i=0;i<tickets.size();i++){

                if(tickets[i].ticketID==ticketID){

                    cout<<endl<<"Ticket Found!"<<endl;
                    cout<<"Ticket ID      : "<<tickets[i].ticketID<<endl;
                    cout<<"Passenger Name : "<<tickets[i].passengerName<<endl;
                    cout<<"Destination    : "<<tickets[i].destination<<endl;
                    cout<<"Seat Number    : "<<tickets[i].seatNumber<<endl;

                    found=true;
                    break;
                }
            }

            if(!found)
                cout<<"Ticket Record Not Found!"<<endl;
        }

        else if(choice=="4"){

            cout<<"Exiting Program..."<<endl;
            break;
        }

        else{

            cout<<"Invalid Choice!"<<endl;
        }
    }

    return 0;
}