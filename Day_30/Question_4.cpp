#include<bits/stdc++.h>
using namespace std;

vector<int>roll;
vector<string>name;
vector<float>marks;

void addStudent()
{
    int r;
    string n;
    float m;

    cout<<"Enter Roll Number:";
    cin>>r;

    cout<<"Enter Name:";
    getline(cin>>ws,n);

    cout<<"Enter Marks:";
    cin>>m;

    roll.push_back(r);
    name.push_back(n);
    marks.push_back(m);

    cout<<"Student Added Successfully!"<<endl;
}

void displayStudents()
{
    if(roll.size()==0)
    {
        cout<<"No Records Found!"<<endl;
        return;
    }

    for(int i=0;i<roll.size();i++)
    {
        cout<<"\nRoll:"<<roll[i]<<endl;
        cout<<"Name:"<<name[i]<<endl;
        cout<<"Marks:"<<marks[i]<<endl;
    }
}

void searchStudent()
{
    if(roll.size()==0)
    {
        cout<<"No Records Found!"<<endl;
        return;
    }

    string s;
    cout<<"Enter Name:";
    getline(cin>>ws,s);

    bool found=false;

    for(int i=0;i<roll.size();i++)
    {
        if(name[i]==s)
        {
            cout<<"Student Found!"<<endl;
            cout<<"Roll:"<<roll[i]<<endl;
            cout<<"Marks:"<<marks[i]<<endl;
            found=true;
            break;
        }
    }

    if(found==false)
        cout<<"Student Not Found!"<<endl;
}

void averageMarks()
{
    if(roll.size()==0)
    {
        cout<<"No Records Found!"<<endl;
        return;
    }

    float sum=0;

    for(int i=0;i<roll.size();i++)
        sum+=marks[i];

    cout<<"Average Marks="<<sum/roll.size()<<endl;
}

int main()
{
    int choice;

    do
    {
        cout<<"\n===== MENU ====="<<endl;
        cout<<"1.Add Student"<<endl;
        cout<<"2.Display Students"<<endl;
        cout<<"3.Search Student"<<endl;
        cout<<"4.Average Marks"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter Choice:";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                averageMarks();
                break;

            case 5:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid Choice!"<<endl;
        }

    }while(choice!=5);

    return 0;
}