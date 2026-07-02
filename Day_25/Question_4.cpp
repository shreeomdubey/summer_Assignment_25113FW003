#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of words: ";
    cin>>n;
    vector<string> words(n);
    cout<<"Enter words:"<<endl;
    for(int i=0;i<n;i++){
        getline(cin>>ws,words[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(words[i].length()>words[j].length()){
                string temp=words[i];
                words[i]=words[j];
                words[j]=temp;
            }
        }
    }
    
    cout<<"Sorted words by length:"<<endl;
    for(int i=0;i<n;i++){
        cout<<words[i]<<endl;
    }

    return 0;
}