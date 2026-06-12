#include<iostream>
using namespace std;

int fibonacci_series(int n)
{
    int c,a=0,b=1;
    {
        for(int i=1;i<n;i++)
        {
            if(i==1)
        {
           cout<< a<<" ";
        }
        if(i==2)
        {
          cout<< b<<" ";
        }
          c=a+b;
          a=b;
          b=c; 
          cout<<c<<" ";
        }
         
    }
}
int main()
{
int x;
cout<<"Enter the value of x:";
cin>>x;
 fibonacci_series(x);
return 0;
}
