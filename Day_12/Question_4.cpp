#include<iostream>
using namespace std;

void perfect_number_check(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
if(n==sum)
    {
        cout<<" Given number is a perfect number";
    }
else 
    {
        cout<<" Given number is not a perfect number";
    }    
}
int main()
{
int x;
cout<<"Enter the value of x:";
cin>>x;

perfect_number_check(x);
return 0;
}