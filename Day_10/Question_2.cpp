#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<< "Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
           cout<<' ';
        }
        for(j=n-i;j>0;j--)
        {
            cout<<'*';
        }
        
        for(j=n-i+1;j>0;j--)
        {
          cout<<'*';
        }
     cout<<endl;
    }
    return 0;
}