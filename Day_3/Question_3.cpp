#include<iostream>
using namespace std;

int main()
{
 int a,b,temp;   
 cout<<"Enter two numbers: ";
 cin>>a>>b;
 while(b!=0){
   temp=b;
   b = b%a;
   a= temp;
 }
  int hcf= a;

cout<<"hcf is: "<<a;

return 0;
}