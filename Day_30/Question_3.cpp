#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>roll;
    vector<string>name,course;
    vector<float>marks;

    int ch;

    do{
        cout<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Update Student"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                int r;
                string n,c;
                float m;

                cout<<"Enter roll number: ";
                cin>>r;

                cout<<"Enter name: ";
                getline(cin>>ws,n);

                cout<<"Enter course: ";
                getline(cin,c);

                cout<<"Enter marks: ";
                cin>>m;

                roll.push_back(r);
                name.push_back(n);
                course.push_back(c);
                marks.push_back(m);

                cout<<"Student added successfully."<<endl;
                break;
            }

            case 2:{
                if(roll.empty()){
                    cout<<"No records found."<<endl;
                }
                else{
                    for(int i=0;i<roll.size();i++){
                        cout<<"----------------------"<<endl;
                        cout<<"Roll Number: "<<roll[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Course: "<<course[i]<<endl;
                        cout<<"Marks: "<<marks[i]<<endl;
                    }
                }
                break;
            }

            case 3:{
                int r,f=0;
                cout<<"Enter roll number to search: ";
                cin>>r;

                for(int i=0;i<roll.size();i++){
                    if(roll[i]==r){
                        cout<<"Roll Number: "<<roll[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Course: "<<course[i]<<endl;
                        cout<<"Marks: "<<marks[i]<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Record not found."<<endl;

                break;
            }

            case 4:{
                int r,f=0;
                cout<<"Enter roll number to update: ";
                cin>>r;

                for(int i=0;i<roll.size();i++){
                    if(roll[i]==r){
                        cout<<"Enter new name: ";
                        getline(cin>>ws,name[i]);

                        cout<<"Enter new course: ";
                        getline(cin,course[i]);

                        cout<<"Enter new marks: ";
                        cin>>marks[i];

                        cout<<"Record updated."<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Record not found."<<endl;

                break;
            }

            case 5:{
                int r,f=0;
                cout<<"Enter roll number to delete: ";
                cin>>r;

                for(int i=0;i<roll.size();i++){
                    if(roll[i]==r){
                        roll.erase(roll.begin()+i);
                        name.erase(name.begin()+i);
                        course.erase(course.begin()+i);
                        marks.erase(marks.begin()+i);

                        cout<<"Record deleted."<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Record not found."<<endl;

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