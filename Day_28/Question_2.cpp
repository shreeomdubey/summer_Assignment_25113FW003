#include<bits/stdc++.h>
using namespace std;

struct Contact{
    string name;
    string phone;
    string email;
    string address;
};

int main(){

    vector<Contact> contacts;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Contact Management System =========="<<endl;
        cout<<"1. Add Contact"<<endl;
        cout<<"2. Display All Contacts"<<endl;
        cout<<"3. Search Contact"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Contact c;

            cout<<"Enter Name: ";
            getline(cin,c.name);

            cout<<"Enter Phone Number: ";
            getline(cin,c.phone);

            cout<<"Enter Email: ";
            getline(cin,c.email);

            cout<<"Enter Address: ";
            getline(cin,c.address);

            contacts.push_back(c);

            cout<<endl<<"Contact Added Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(contacts.empty()){
                cout<<endl<<"No Contact Records Found!"<<endl;
                continue;
            }

            cout<<endl<<"Contact Records"<<endl;

            for(int i=0;i<contacts.size();i++){

                cout<<endl;
                cout<<"Contact "<<i+1<<endl;
                cout<<"Name          : "<<contacts[i].name<<endl;
                cout<<"Phone Number  : "<<contacts[i].phone<<endl;
                cout<<"Email         : "<<contacts[i].email<<endl;
                cout<<"Address       : "<<contacts[i].address<<endl;
            }
        }

        else if(choice=="3"){

            string name;
            bool found=false;

            cout<<"Enter Name to Search: ";
            getline(cin,name);

            for(int i=0;i<contacts.size();i++){

                if(contacts[i].name==name){

                    cout<<endl<<"Contact Found!"<<endl;
                    cout<<"Name          : "<<contacts[i].name<<endl;
                    cout<<"Phone Number  : "<<contacts[i].phone<<endl;
                    cout<<"Email         : "<<contacts[i].email<<endl;
                    cout<<"Address       : "<<contacts[i].address<<endl;

                    found=true;
                    break;
                }
            }

            if(!found)
                cout<<"Contact Record Not Found!"<<endl;
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