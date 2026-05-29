#include <iostream>
using namespace std;

int main ()
{
  int n,digit,sum=0;
  cout << "Enter the value of n: ";
  cin>>n;

while (n>0)
    {
        digit= n%10 ;
        sum= sum + digit ;
        n = n/10 ;
    }
cout<<"The sum of digits of number is: "<<sum;
return 0;
}