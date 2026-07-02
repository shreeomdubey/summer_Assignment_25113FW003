#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    string name;
    int secret=rand()%100+1;
    int guess,attempts=0;

    cout<<"=================================="<<endl;
    cout<<"     NUMBER GUESSING GAME"<<endl;
    cout<<"=================================="<<endl;

    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<endl;
    cout<<"Welcome "<<name<<"!"<<endl;
    cout<<"I have selected a number between 1 and 100."<<endl;
    cout<<"Can you guess the correct number?"<<endl;
    cout<<"Let's begin!"<<endl<<endl;

    while(true)
    {
        cout<<"Enter your guess: ";
        cin>>guess;

        attempts++;

        if(guess==secret)
        {
            cout<<endl;
            cout<<"Congratulations "<<name<<"!"<<endl;
            cout<<"You guessed the correct number."<<endl;
            cout<<"The number was "<<secret<<"."<<endl;
            cout<<"You guessed it in "<<attempts<<" attempt(s)."<<endl;
            cout<<"Thanks for playing!"<<endl;
            break;
        }
        else if(guess<secret)
        {
            cout<<"Too Low! Try a bigger number."<<endl<<endl;
        }
        else
        {
            cout<<"Too High! Try a smaller number."<<endl<<endl;
        }
    }

    return 0;
}