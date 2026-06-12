#include<iostream>
using namespace std;

void palindrome_check(int n)
{
    int digit,sum=0;
    int num=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum*10+digit;
        n/=10;
    }
    if(num==sum)
    {
        cout<<" Given number is palindrome";
    }
    else 
    {
        cout<<" Given number is not palindrome";
    }
}

int main()
{
int x;
cout<<"Enter the value of x:";
cin>>x;

palindrome_check(x);
return 0;
}