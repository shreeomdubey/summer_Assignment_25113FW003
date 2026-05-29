#include <iostream>
using namespace std;

int main ()
{
  int n,digit,reverse=0;
  cout << "Enter the value of n: ";
  cin>>n;
   int number=n;
while(n>0)
   {
    digit= n%10;
    reverse= reverse*10 + digit;
    n= n/10;
   }
if (number==reverse)
   {
    cout<<"Given number is palindrome";
   }
else
    {
    cout<<"Given number is not palindrome";
    }
return 0;
}
