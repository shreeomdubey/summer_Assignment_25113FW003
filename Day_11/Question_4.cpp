#include<iostream>
using namespace std;
 
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    return fact;
}
int main()
{
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Factorial of the given number is :"<<factorial(x);
    return 0;
}