#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;

    cout<<"Enter the first string:";
    getline(cin,s1);

    cout<<"Enter the second string:";
    getline(cin,s2);

    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                cout<<s1[i]<<" ";
               s2[j]='*';
               break;
            }
        }
    }
return 0;
}