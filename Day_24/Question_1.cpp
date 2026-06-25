#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cout<<"Enter string 1: ";
    getline(cin,a);
    cout<<"enter string 2: ";
    getline(cin,b);

    if(a.size()!=b.size()){
        cout<<"NO Rotation";
        return 0;
    }

    string temp=a+a;

    if(temp.find(b)!=string::npos){   //permutation of string exists..
        cout<<"Rotation";
    }
    else{
        cout<<"NO Rotation";
    }
    return 0;
}