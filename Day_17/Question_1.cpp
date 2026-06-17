#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,i,arr[100],brr[100],crr[100];
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
  for(i=0;i<m;i++)
  {
    cin>>brr[i];
  }
 for(i=0;i<n;i++)
 {
    crr[i]=arr[i];
 }
 for(i=0;i<m;i++)
 {
    crr[n+i]=brr[i];
 }
 cout<<"Merged array is given as:";
 for(i=0;i<n+m;i++)
 {
    cout<<crr[i]<<" ";
 }
 return 0;
}