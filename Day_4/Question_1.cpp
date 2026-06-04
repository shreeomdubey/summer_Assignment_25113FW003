#include<iostream>
using namespace std;

int main(){
int a=0,b=1,n,c;

cout<<"Enter the value of n: ";
cin>>n;
for(int i=1;i<=n;i++)
{
 if(i==1)
 {
   cout<<"fibonacci series is given as: "<<a <<" " ;
 }
else if(i==2)
 {
 cout<<b <<" " ;

 }
 else
 {
    c=a+b;
    a=b;
    b=c;
    cout<<" "<<c;
 }
}
return 0;
}