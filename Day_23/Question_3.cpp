#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s1,s2;
  cout<<"enter string s1:";
  cin>>s1;
  cout<<"Enter string s2:";
  cin>>s2;

  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  if(s1==s2)
  cout<<"string is Anargam";
  else
  cout<<"string is not Anargam";
  return 0;
}