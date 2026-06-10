#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<< "Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            cout<<' ';
        }
        for(j=1;j<=i;j++)
        {
           cout<< char ('A' + j-1);
        }
        for(j=1;j<=i-1;j++)
        {
            cout<< char ('A'+i-j-1);
        }
     cout<<endl;
    }
    return 0;
}