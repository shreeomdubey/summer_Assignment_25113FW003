#include<iostream>
using namespace std;

int sum_of_numbers(int a,int b)
{
   return (a+b);
}
 int main()
 { int x,y;
   cout<<"Enter two numbers:";
   cin>>x>>y;
   
    int ans=sum_of_numbers(x,y);
    cout<<"Sum of the given two numbers is: "<<ans;
    return 0;
 }