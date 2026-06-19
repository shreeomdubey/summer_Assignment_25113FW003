#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i,j,arr[100][100],brr[100][100],crr[100][100];

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
  cout<<"Enter the elements of array_2:";
 for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
    cin>>brr[i][j];
    }
  }
  cout<<"subtraction of both arrays are given as:"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
        crr[i][j]=arr[i][j]-brr[i][j];
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
  }
return 0;
}