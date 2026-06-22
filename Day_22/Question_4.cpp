#include<bits/stdc++.h>
using namespace std;

int main()
{
  string name;
 
  cout<<"Enter the string:";
  getline(cin,name);
  for(int i=0;i<name.length();i++ )
  {
    if(name[i]!=' ')
    cout<<name[i];
  }
  return 0;
}