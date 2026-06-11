#include<iostream>
using namespace std;

void Is_prime(int x)
{
    int count=0;
    if(x<=1)
    {
        count=1;
    }
    for(int i=2;i<x;i++)
    {
      if(x%i==0)
      {
        count=1;
      }
    }
    if(count==0)
    {
        cout<<"Given number is prime";
    }
    else
    {
        cout<<"given number is not prime";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    Is_prime(n);
    return 0;
}