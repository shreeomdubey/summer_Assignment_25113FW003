#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,n,num,c;

    cout<<"Enter the value of n: ";
    cin>>n;
    num=n;

    if(num==1)
    {
        cout<<a;
    }
    else if(num==2)
    {
        cout<<b;
    }
    else
    {
        for(int i=3;i<=num;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }

    return 0;
}