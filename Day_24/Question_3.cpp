#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    string word="";
    string maxword="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            word+=s[i];
        }
        else{
            if(word.size()>maxword.size()){
                maxword=word;
            }
            word="";
        }
    }
    if(word.size()>maxword.size()){   //for last word (which doesn't end with a ' ')
        maxword=word;
    }

    cout<<"The largest word in the given string is: "<<maxword;
    return 0;
}