#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout<<"Enter the string:";
    cin>>name;
    for(int i=0;i<name.length();i++){
        int count=0;
       for(int j=i+1;j<name.length();j++){
         if(name[i]==name[j]){
            count++;
         }
       }
       if(count==0){
       cout<<"First non repeating character is:"<<name[i];
       return 0;    
       }
    }
    return 0;
}