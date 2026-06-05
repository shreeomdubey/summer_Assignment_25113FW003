#include <iostream>
using namespace std;

int main()
{
  int n,i,sum=0,digit,fact,num;
  cout<<"Enter the value of n: ";
  cin>>n;
  num=n;
    while(n!=0)
    {
        
     digit=n%10;
     n=n/10;

     fact=1;
     for(i=1;i<=digit;i++)
     {
       fact=fact*i;
     }
     sum=sum+fact;
    }

if(num==sum)
{
    cout<<"n is a strong number";
}
else
{
    cout<<"n is not a strong number";
}
return 0;
}