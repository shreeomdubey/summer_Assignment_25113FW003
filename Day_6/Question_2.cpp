#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,digit,sum=0,place=1;
  
  cout<<"Enter the decimal number: ";
  cin>>n;
   int num=n;
  {
    while(n!=0)
    digit=n%2;
    n=n/2;
    sum=sum + digit*place;
    place=place*10;
  }

  cout<< sum<<"is the binary conversion of number"<<num;
  return 0;
}