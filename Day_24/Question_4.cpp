#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    vector<int> seen(256,0);  //hashing
    string res="";

    for(int i=0;i<s.size();i++){
        if(seen[s[i]]==0){
            res+=s[i];
            seen[s[i]]=1;
        }
    }

    cout<<"String aftert removing duplicates: "<<res;
    return 0;
}