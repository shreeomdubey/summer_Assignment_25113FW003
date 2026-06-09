#include<iostream>
using namespace std;

int main()
{
  int n,i,j;
  cout<<"Enter the value of n:";
  cin>>n;

  for(i=n;i>0;i--)
  {
    for(j=1;j<=i;j++)
     {
        cout<<'*';
     }
   cout<<endl;
  }
return 0;
} 