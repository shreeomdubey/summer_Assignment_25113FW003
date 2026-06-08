#include<iostream>
using namespace std;

int main()
{
  int n,i,j;
  cout<<"Enter the value of n:";
  cin>>n;

  for(i=1;i<=n;i++)
  {
    char alpha='A';
    for(j=1;j<=i;j++)
     {
        cout<<alpha;
        alpha++;
     }
  cout<<endl;
  }
return 0;
} 