#include<bits/stdc++.h>
using namespace std;

struct Student{
    string roll;
    string name;
    string age;
    string course;
};

int main(){

    vector<Student> students;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Student Record Management =========="<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display All Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Student s;

            cout<<"Enter Roll Number: ";
            getline(cin,s.roll);

            cout<<"Enter Name: ";
            getline(cin,s.name);

            cout<<"Enter Age: ";
            getline(cin,s.age);

            cout<<"Enter Course: ";
            getline(cin,s.course);

            students.push_back(s);

            cout<<endl<<"Student Record Added Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(students.empty()){
                cout<<endl<<"No Student Records Found!"<<endl;
                continue;
            }

            cout<<endl<<"Student Records"<<endl;

            for(int i=0;i<students.size();i++){

                cout<<endl;
                cout<<"Student "<<i+1<<endl;
                cout<<"Roll Number : "<<students[i].roll<<endl;
                cout<<"Name        : "<<students[i].name<<endl;
                cout<<"Age         : "<<students[i].age<<endl;
                cout<<"Course      : "<<students[i].course<<endl;
            }
        }

        else if(choice=="3"){

            string roll;
            bool found=false;

            cout<<"Enter Roll Number to Search: ";
            getline(cin,roll);

            for(int i=0;i<students.size();i++){

                if(students[i].roll==roll){

                    cout<<endl<<"Student Found!"<<endl;
                    cout<<"Roll Number : "<<students[i].roll<<endl;
                    cout<<"Name        : "<<students[i].name<<endl;
                    cout<<"Age         : "<<students[i].age<<endl;
                    cout<<"Course      : "<<students[i].course<<endl;

                    found=true;
                    break;
                }
            }

            if(!found)
                cout<<"Student Record Not Found!"<<endl;
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