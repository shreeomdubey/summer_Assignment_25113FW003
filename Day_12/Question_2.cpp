#include<iostream>
#include<cmath>
using namespace std;

void armstrong_check(int n)
 {
 int digit, power=0,sum=0;
 int num=n,lum=n;
 while(n>0)
  {
      n=n/10;
      power++;
  }
   while(lum>0)
  {
    digit=lum%10;
    lum=lum/10;
    sum=sum+pow(digit,power);
  }
 if(num==sum)
 {
    cout<<"Given number is armstrong";
 }
 else
 {
    cout<<"Given number is not armstrong";
 }
}
int main()
{
int x;
cout<<"Enter the value of x:";
cin>>x;

armstrong_check(x);
return 0;
}