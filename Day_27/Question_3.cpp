#include<bits/stdc++.h>
using namespace std;

struct Salary{
    string empId;
    string empName;
    string basicSalary;
    string bonus;
};

int main(){

    vector<Salary> records;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Salary Management System =========="<<endl;
        cout<<"1. Add Salary Record"<<endl;
        cout<<"2. Display All Records"<<endl;
        cout<<"3. Search Record"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Salary s;

            cout<<"Enter Employee ID: ";
            getline(cin,s.empId);

            cout<<"Enter Employee Name: ";
            getline(cin,s.empName);

            cout<<"Enter Basic Salary: ";
            getline(cin,s.basicSalary);

            cout<<"Enter Bonus: ";
            getline(cin,s.bonus);

            records.push_back(s);

            cout<<endl<<"Salary Record Added Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(records.empty()){
                cout<<endl<<"No Salary Records Found!"<<endl;
                continue;
            }

            cout<<endl<<"Salary Records"<<endl;

            for(int i=0;i<records.size();i++){

                cout<<endl;
                cout<<"Record "<<i+1<<endl;
                cout<<"Employee ID   : "<<records[i].empId<<endl;
                cout<<"Employee Name : "<<records[i].empName<<endl;
                cout<<"Basic Salary  : "<<records[i].basicSalary<<endl;
                cout<<"Bonus         : "<<records[i].bonus<<endl;
            }
        }

        else if(choice=="3"){

            string id;
            bool found=false;

            cout<<"Enter Employee ID to Search: ";
            getline(cin,id);

            for(int i=0;i<records.size();i++){

                if(records[i].empId==id){

                    cout<<endl<<"Salary Record Found!"<<endl;
                    cout<<"Employee ID   : "<<records[i].empId<<endl;
                    cout<<"Employee Name : "<<records[i].empName<<endl;
                    cout<<"Basic Salary  : "<<records[i].basicSalary<<endl;
                    cout<<"Bonus         : "<<records[i].bonus<<endl;

                    found=true;
                    break;
                }
            }

            if(!found)
                cout<<"Salary Record Not Found!"<<endl;
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