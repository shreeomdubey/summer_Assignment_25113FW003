#include <iostream>
using namespace std;

int main ()
{
  int n,digit,reverse=0;
  cout << "Enter the value of n: ";
  cin>>n;
while(n>0)
   {
    digit= n%10;
    reverse= reverse*10 + digit;
    n= n/10;
   }
cout<<"Reverse of the number is: "<<reverse ;
return 0;
} 