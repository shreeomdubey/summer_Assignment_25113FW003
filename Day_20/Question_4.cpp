#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i,j,arr[100][100];
   int sum;

  cout<<"Enter the value of rows:";
  cin>>n;
  cout<<"Enter the value of columns:";
  cin>>m;
  

  cout<<"Enter the elements of array_1:";
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
    cin>>arr[i][j];
    }
 }
    for(j=0;j<n;j++)
     {
        sum=0;
       for(i=0;i<m;i++)
       {
        sum=sum+arr[i][j];
       }
        cout<<j+1<<" column elements sum is :"<<sum;
        cout<<endl;
    }
    return 0;
}