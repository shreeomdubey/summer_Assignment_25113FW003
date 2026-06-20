#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i,j,arr[100][100],brr[100][100];
   int count=0;

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
 
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
        brr[i][j]=arr[j][i];
    }
  }
   for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
        if(arr[i][j]!=brr[i][j])
        {
            count++;
        }
         
    }
  }
        if(count==0)
        {
            cout<<"matrix is symmetric";
        }

return 0;
}