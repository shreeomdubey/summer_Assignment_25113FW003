#include<bits/stdc++.h>
using namespace std;

struct Marksheet{
    string roll;
    string name;
    int s1,s2,s3;
    int maxMarks;
    int total;
    float percentage;
};

int toInt(string s){
    int num=0;
    for(int i=0;i<s.size();i++){
        num=num*10+(s[i]-'0');
    }
    return num;
}

int main(){

    vector<Marksheet> records;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Marksheet System =========="<<endl;
        cout<<"1. Add Marksheet"<<endl;
        cout<<"2. Display All"<<endl;
        cout<<"3. Search"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Marksheet m;
            string temp;

            cout<<"Enter Roll Number: ";
            getline(cin,m.roll);

            cout<<"Enter Name: ";
            getline(cin,m.name);

            cout<<"Enter Max Marks (each subject): ";
            getline(cin,temp);
            m.maxMarks=toInt(temp);

            cout<<"Enter Subject 1 Marks: ";
            getline(cin,temp);
            m.s1=toInt(temp);

            cout<<"Enter Subject 2 Marks: ";
            getline(cin,temp);
            m.s2=toInt(temp);

            cout<<"Enter Subject 3 Marks: ";
            getline(cin,temp);
            m.s3=toInt(temp);

            m.total=m.s1+m.s2+m.s3;

            int maxTotal=m.maxMarks*3;
            m.percentage=(m.total*100.0)/maxTotal;

            records.push_back(m);

            cout<<endl<<"Marksheet Added Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(records.size()==0){
                cout<<endl<<"No Records Found!"<<endl;
                continue;
            }

            for(int i=0;i<records.size();i++){

                cout<<endl;
                cout<<"Roll: "<<records[i].roll<<endl;
                cout<<"Name: "<<records[i].name<<endl;
                cout<<"Max Marks (each): "<<records[i].maxMarks<<endl;

                cout<<"S1: "<<records[i].s1<<endl;
                cout<<"S2: "<<records[i].s2<<endl;
                cout<<"S3: "<<records[i].s3<<endl;

                cout<<"Total: "<<records[i].total<<endl;
                cout<<"Percentage: "<<records[i].percentage<<endl;
            }
        }

        else if(choice=="3"){

            string roll;
            int found=0;

            cout<<"Enter Roll Number: ";
            getline(cin,roll);

            for(int i=0;i<records.size();i++){

                if(records[i].roll==roll){

                    cout<<endl<<"Found!"<<endl;
                    cout<<"Name: "<<records[i].name<<endl;
                    cout<<"Total: "<<records[i].total<<endl;
                    cout<<"Percentage: "<<records[i].percentage<<endl;

                    found=1;
                    break;
                }
            }

            if(found==0){
                cout<<"Not Found!"<<endl;
            }
        }

        else if(choice=="4"){
            cout<<"Exiting..."<<endl;
            break;
        }

        else{
            cout<<"Invalid Choice!"<<endl;
        }
    }

    return 0;
}