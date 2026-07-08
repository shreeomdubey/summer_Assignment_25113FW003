#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>id;
    vector<string>name,department;
    vector<float>salary;

    int ch;

    do{
        cout<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Update Employee"<<endl;
        cout<<"5. Delete Employee"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                int i;
                string n,d;
                float s;

                cout<<"Enter Employee ID: ";
                cin>>i;

                cout<<"Enter Employee Name: ";
                getline(cin>>ws,n);

                cout<<"Enter Department: ";
                getline(cin,d);

                cout<<"Enter Salary: ";
                cin>>s;

                id.push_back(i);
                name.push_back(n);
                department.push_back(d);
                salary.push_back(s);

                cout<<"Employee added successfully."<<endl;
                break;
            }

            case 2:{
                if(id.empty()){
                    cout<<"No employee records found."<<endl;
                }
                else{
                    for(int i=0;i<id.size();i++){
                        cout<<"----------------------"<<endl;
                        cout<<"Employee ID: "<<id[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Department: "<<department[i]<<endl;
                        cout<<"Salary: "<<salary[i]<<endl;
                    }
                }
                break;
            }

            case 3:{
                int e,f=0;
                cout<<"Enter Employee ID to search: ";
                cin>>e;

                for(int i=0;i<id.size();i++){
                    if(id[i]==e){
                        cout<<"Employee ID: "<<id[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Department: "<<department[i]<<endl;
                        cout<<"Salary: "<<salary[i]<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Employee not found."<<endl;

                break;
            }

            case 4:{
                int e,f=0;
                cout<<"Enter Employee ID to update: ";
                cin>>e;

                for(int i=0;i<id.size();i++){
                    if(id[i]==e){
                        cout<<"Enter New Name: ";
                        getline(cin>>ws,name[i]);

                        cout<<"Enter New Department: ";
                        getline(cin,department[i]);

                        cout<<"Enter New Salary: ";
                        cin>>salary[i];

                        cout<<"Employee updated successfully."<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Employee not found."<<endl;

                break;
            }

            case 5:{
                int e,f=0;
                cout<<"Enter Employee ID to delete: ";
                cin>>e;

                for(int i=0;i<id.size();i++){
                    if(id[i]==e){
                        id.erase(id.begin()+i);
                        name.erase(name.begin()+i);
                        department.erase(department.begin()+i);
                        salary.erase(salary.begin()+i);

                        cout<<"Employee deleted successfully."<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Employee not found."<<endl;

                break;
            }

            case 6:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid choice."<<endl;
        }

    }while(ch!=6);

    return 0;
}