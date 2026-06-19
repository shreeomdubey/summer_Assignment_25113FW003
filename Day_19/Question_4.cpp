#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,arr[100][100],sum=0;

  cout<<"Enter the value of rows and columns:";
  cin>>n;

  cout<<"Enter the elements of array_1:";
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
    cin>>arr[i][j];
    }
 }
 
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        if(i==j){
       sum=sum+arr[i][j];
        }
    }
    
  }
  cout<<" sum of digonal elemensnof array is given as:"<<sum;
return 0;
}