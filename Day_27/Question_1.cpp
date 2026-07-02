#include<bits/stdc++.h>
using namespace std;

struct Employee{
    string id;
    string name;
    string department;
    string salary;
};

int main(){

    vector<Employee> employees;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Employee Management System =========="<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display All Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Employee e;

            cout<<"Enter Employee ID: ";
            getline(cin,e.id);

            cout<<"Enter Employee Name: ";
            getline(cin,e.name);

            cout<<"Enter Department: ";
            getline(cin,e.department);

            cout<<"Enter Salary: ";
            getline(cin,e.salary);

            employees.push_back(e);

            cout<<endl<<"Employee Record Added Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(employees.empty()){
                cout<<endl<<"No Employee Records Found!"<<endl;
                continue;
            }

            cout<<endl<<"Employee Records"<<endl;

            for(int i=0;i<employees.size();i++){

                cout<<endl;
                cout<<"Employee "<<i+1<<endl;
                cout<<"Employee ID : "<<employees[i].id<<endl;
                cout<<"Name        : "<<employees[i].name<<endl;
                cout<<"Department  : "<<employees[i].department<<endl;
                cout<<"Salary      : "<<employees[i].salary<<endl;
            }
        }

        else if(choice=="3"){

            string id;
            bool found=false;

            cout<<"Enter Employee ID to Search: ";
            getline(cin,id);

            for(int i=0;i<employees.size();i++){

                if(employees[i].id==id){

                    cout<<endl<<"Employee Found!"<<endl;
                    cout<<"Employee ID : "<<employees[i].id<<endl;
                    cout<<"Name        : "<<employees[i].name<<endl;
                    cout<<"Department  : "<<employees[i].department<<endl;
                    cout<<"Salary      : "<<employees[i].salary<<endl;

                    found=true;
                    break;
                }
            }

            if(!found)
                cout<<"Employee Record Not Found!"<<endl;
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