#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);

    string res="";
    int count=1;

    for(int i=0;i<s.size();i++){
        if(i+1<s.size()&&s[i]==s[i+1]){
            count++;
        }
        else{
            res+=s[i];
            res+=to_string(count);
            count=1;
        }
    }

    cout<<"Here is your compressed string: "<<res;
    return 0;
}