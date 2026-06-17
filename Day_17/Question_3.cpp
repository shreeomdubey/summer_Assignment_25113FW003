#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,i,j,arr[100],brr[100];
  cout<<"Enter the value of n:";
  cin>>n;
  cout<<"Enter the elements of first array:";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the value of m:";
  cin>>m;

  cout<<"Enter the elements of second array:";
  for(j=0;j<m;j++)
  {
    cin>>brr[j];
  }
  cout<<"common elements of both arrays are given as:";
  for(i=0;i<n;i++)
  {
     for(j=0;j<m;j++)
      {
         if(arr[i]==brr[j])
         {
         cout<<arr[i]<<" ";
         brr[j]=-1;
         break;
         }
      }
  }
  return 0;
}