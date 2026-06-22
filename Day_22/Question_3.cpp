#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,j,count;
  string name;
 
  cout<<"Enter the string:";
  cin>>name;
  for( i=0;i<name.length();i++)
  {
    count=1;
    for(j=i+1;j<name.length();j++)
    {
        if(name[i]==name[j]){
        name[j]='*';
        count++;
        }
    }
    if(name[i]!='*'){
    cout<<count<<" is the frequency of character:"<<name[i];
    cout<<endl;
    }
  }
  return 0;
}