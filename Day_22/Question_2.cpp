#include<bits/stdc++.h>
using namespace std;

int main()
{
  int count=0;
  string name;
 
  cout<<"Enter the string:";
  getline(cin,name);
  for(int i=0;i<name.length();i++)
  {
    if(name[i]==' ')
    count++;
  }
  cout<<"words in sentence are:"<<count+1;
  return 0;
}