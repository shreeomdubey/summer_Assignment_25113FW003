#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    float balance=10000,amount;
    int choice;

    cout<<"=================================="<<endl;
    cout<<"       ATM SIMULATION"<<endl;
    cout<<"=================================="<<endl;

    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<endl;
    cout<<"Welcome "<<name<<"!"<<endl;
    cout<<"Your account has been successfully accessed."<<endl;

    do
    {
        cout<<endl;
        cout<<"========== ATM MENU =========="<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<endl;
                cout<<"Your current balance is Rs."<<balance<<endl;
                break;

            case 2:
                cout<<endl;
                cout<<"Enter the amount you want to deposit: Rs.";
                cin>>amount;

                balance+=amount;

                cout<<"Rs."<<amount<<" has been deposited successfully."<<endl;
                cout<<"Updated Balance: Rs."<<balance<<endl;
                break;

            case 3:
                cout<<endl;
                cout<<"Enter the amount you want to withdraw: Rs.";
                cin>>amount;

                if(amount<=balance)
                {
                    balance-=amount;
                    cout<<"Please collect your cash."<<endl;
                    cout<<"Remaining Balance: Rs."<<balance<<endl;
                }
                else
                {
                    cout<<"Insufficient balance!"<<endl;
                    cout<<"Your current balance is Rs."<<balance<<endl;
                }
                break;

            case 4:
                cout<<endl;
                cout<<"Thank you for using our ATM, "<<name<<"!"<<endl;
                cout<<"Have a great day!"<<endl;
                break;

            default:
                cout<<endl;
                cout<<"Invalid choice! Please try again."<<endl;
        }

    }while(choice!=4);

    return 0;
}