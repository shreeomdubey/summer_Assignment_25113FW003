#include <iostream>
using namespace std;

int main()
{
  int n,i,sum=0;
  cout<<"Enter the value of n: ";
  cin>>n;

  for(i=1;i<n;i++)
  {
    if(n%i==0){
    sum=sum+i;
   }
  }
  if(sum==n)
    {
        cout<< n << " is a perfect number";
    }
  else
    {
       cout<< n << " is not a perfect number";
    }

return 0;
}