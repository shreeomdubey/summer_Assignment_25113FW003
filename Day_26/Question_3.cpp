#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int choice,score=0;

    cout<<"=================================="<<endl;
    cout<<"      QUIZ APPLICATION"<<endl;
    cout<<"=================================="<<endl;

    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<endl;
    cout<<"Welcome "<<name<<"!"<<endl;
    cout<<"Answer the following questions."<<endl<<endl;

    cout<<"Q1. Which is the capital of India?"<<endl;
    cout<<"1. Mumbai"<<endl;
    cout<<"2. New Delhi"<<endl;
    cout<<"3. Kolkata"<<endl;
    cout<<"4. Chennai"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==2)
    {
        cout<<"Correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Wrong!"<<endl;
        cout<<"Correct Answer: New Delhi"<<endl;
    }

    cout<<endl;

    cout<<"Q2. Who developed C++?"<<endl;
    cout<<"1. Dennis Ritchie"<<endl;
    cout<<"2. James Gosling"<<endl;
    cout<<"3. Bjarne Stroustrup"<<endl;
    cout<<"4. Guido Van Rossum"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==3)
    {
        cout<<"Correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Wrong!"<<endl;
        cout<<"Correct Answer: Bjarne Stroustrup"<<endl;
    }

    cout<<endl;

    cout<<"Q3. Which planet is known as the Red Planet?"<<endl;
    cout<<"1. Earth"<<endl;
    cout<<"2. Mars"<<endl;
    cout<<"3. Jupiter"<<endl;
    cout<<"4. Venus"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==2)
    {
        cout<<"Correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Wrong!"<<endl;
        cout<<"Correct Answer: Mars"<<endl;
    }

    cout<<endl;
    cout<<"=================================="<<endl;
    cout<<"Quiz Completed!"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Score : "<<score<<"/3"<<endl;

    if(score==3)
        cout<<"Excellent!"<<endl;
    else if(score==2)
        cout<<"Good Job!"<<endl;
    else
        cout<<"Better Luck Next Time!"<<endl;

    return 0;
}