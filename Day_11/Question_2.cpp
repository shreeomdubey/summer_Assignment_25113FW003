#include<iostream>
using namespace std;

int maximum_of_two(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
 int main()
 { int x,y;
   cout<<"Enter two numbers:";
   cin>>x>>y;
   
    int ans=maximum_of_two(x,y);
    cout<<"maximum of the given two numbers is: "<<ans;
    return 0;
 }