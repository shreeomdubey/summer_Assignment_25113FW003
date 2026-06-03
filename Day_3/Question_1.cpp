#include<iostream>
using namespace std;

int main()
{
 int n,i,count=0;
 cout<<"Enter the value of n: ";
 cin>>n;
 for(i=2; i<n; i++)
 {
    if(n%i==0)
   {
     count=count+1;
   }
 }   
   if(count==0)
     {
       cout<<"Number n is  a prime number";
     }
   else
     {
        cout<<"Number n is not a prime number";
     }
 
return 0;
}