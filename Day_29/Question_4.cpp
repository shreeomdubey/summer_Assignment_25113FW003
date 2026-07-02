#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,sub;
    int choice,pos,len;

    cout<<"Enter a string: ";
    getline(cin,str);

    while(true)
    {
        cout<<endl;
        cout<<"===== MENU DRIVEN STRING OPERATIONS ====="<<endl;
        cout<<"1. Display String"<<endl;
        cout<<"2. Find Length"<<endl;
        cout<<"3. Reverse String"<<endl;
        cout<<"4. Substring"<<endl;
        cout<<"5. Insert String"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"String: "<<str<<endl;
                break;

            case 2:
                cout<<"Length: "<<str.length()<<endl;
                break;

            case 3:
                reverse(str.begin(),str.end());
                cout<<"Reversed String: "<<str<<endl;
                break;

            case 4:
                cout<<"Enter position: ";
                cin>>pos;
                cout<<"Enter length: ";
                cin>>len;

                if(pos>=0&&pos<str.length())
                    cout<<"Substring: "<<str.substr(pos,len)<<endl;
                else
                    cout<<"Invalid position!"<<endl;

                break;

            case 5:
                cout<<"Enter position: ";
                cin>>pos;
                cout<<"Enter string to insert: ";
                cin>>sub;

                if(pos>=0&&pos<=str.length())
                {
                    str.insert(pos,sub);
                    cout<<"Updated String: "<<str<<endl;
                }
                else
                    cout<<"Invalid position!"<<endl;

                break;

            case 6:
                cout<<"Exiting..."<<endl;
                return 0;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }

    return 0;
}