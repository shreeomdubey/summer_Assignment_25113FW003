#include<bits/stdc++.h>
using namespace std;

struct Account{
    string accountNumber;
    string holderName;
    string accountType;
    string balance;
};

int main(){

    vector<Account> accounts;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Bank Account Management System =========="<<endl;
        cout<<"1. Add Account"<<endl;
        cout<<"2. Display All Accounts"<<endl;
        cout<<"3. Search Account"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Account a;

            cout<<"Enter Account Number: ";
            getline(cin,a.accountNumber);

            cout<<"Enter Account Holder Name: ";
            getline(cin,a.holderName);

            cout<<"Enter Account Type: ";
            getline(cin,a.accountType);

            cout<<"Enter Balance: ";
            getline(cin,a.balance);

            accounts.push_back(a);

            cout<<endl<<"Account Added Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(accounts.empty()){
                cout<<endl<<"No Account Records Found!"<<endl;
                continue;
            }

            cout<<endl<<"Account Records"<<endl;

            for(int i=0;i<accounts.size();i++){

                cout<<endl;
                cout<<"Account "<<i+1<<endl;
                cout<<"Account Number : "<<accounts[i].accountNumber<<endl;
                cout<<"Holder Name    : "<<accounts[i].holderName<<endl;
                cout<<"Account Type   : "<<accounts[i].accountType<<endl;
                cout<<"Balance        : "<<accounts[i].balance<<endl;
            }
        }

        else if(choice=="3"){

            string accountNumber;
            bool found=false;

            cout<<"Enter Account Number to Search: ";
            getline(cin,accountNumber);

            for(int i=0;i<accounts.size();i++){

                if(accounts[i].accountNumber==accountNumber){

                    cout<<endl<<"Account Found!"<<endl;
                    cout<<"Account Number : "<<accounts[i].accountNumber<<endl;
                    cout<<"Holder Name    : "<<accounts[i].holderName<<endl;
                    cout<<"Account Type   : "<<accounts[i].accountType<<endl;
                    cout<<"Balance        : "<<accounts[i].balance<<endl;

                    found=true;
                    break;
                }
            }

            if(!found)
                cout<<"Account Record Not Found!"<<endl;
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