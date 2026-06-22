#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,s,e,count=0;
  string name;
 
  cout<<"Enter the string:";
  cin>>name;
  n=name.length();
  s=0;
  e=n-1;
  while(s<=e)
  {
    if(name[s]!=name[e]){
    count=1;
    break;
    }
    else
    {
        s++;
        e--;
    }
  }
  if(count==0)
  cout<<"string is palindrome";
  else
  cout<<"string is not plaindrome";
return 0;
}