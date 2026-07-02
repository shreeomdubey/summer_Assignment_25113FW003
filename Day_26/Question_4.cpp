#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int age;

    cout<<"=================================="<<endl;
    cout<<"   VOTING ELIGIBILITY SYSTEM"<<endl;
    cout<<"=================================="<<endl;

    cout<<"Welcome!"<<endl;
    cout<<"Let's check whether you are eligible to vote."<<endl<<endl;

    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your age: ";
    cin>>age;

    cout<<endl;
    cout<<"Hello "<<name<<"!"<<endl;

    if(age>=18)
    {
        cout<<"Congratulations!"<<endl;
        cout<<"You are "<<age<<" years old."<<endl;
        cout<<"You are eligible to vote."<<endl;
        cout<<"Please cast your vote responsibly."<<endl;
    }
    else
    {
        cout<<"You are "<<age<<" years old."<<endl;
        cout<<"Sorry, you are not eligible to vote."<<endl;
        cout<<"You can vote after "<<18-age<<" more year(s)."<<endl;
    }

    cout<<endl;
    cout<<"Thank you for using the Voting Eligibility System!"<<endl;

    return 0;
}