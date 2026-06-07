#include<iostream>
using namespace std;

int fiboncci_series(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int ans = fiboncci_series(n-1)+fiboncci_series(n-2);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Fibonacci series is given as  upto terms "<< n<< endl;
    for(int i=0;i<=n;i++)
    {
        cout<<fiboncci_series(i)<<" ";
    }
    return 0;
}