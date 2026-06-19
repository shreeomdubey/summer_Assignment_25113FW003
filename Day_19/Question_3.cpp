#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i,j,arr[100][100],brr[100][100];

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
 cout<<"Transpose of array is given as:"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
        brr[i][j]=arr[j][i];
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }
return 0;
}