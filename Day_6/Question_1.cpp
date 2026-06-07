#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,digit,sum=0,power=0;
  
  cout<<"Enter the binary number: ";
  cin>>n;
  int num = n;
  
  while(n>0){
   digit=n%10;
   sum+=digit*pow(2,power);
    power++;
    n=n/10;
  }

   cout<<sum<<" is decimal conversion of binary number "<<num;
   return 0;
}
    

