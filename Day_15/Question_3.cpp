#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,k,arr[100],brr[100];
  cout<<"Enter the value of n:";
  cin>>n;

  cout<<"Enter the value of k:";
  cin>>k;

  cout<<"Enter elements of array:";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  k=k%n;
 for(i=0;i<k;i++)
 {
   brr[i]=arr[n-k+i];
 }
 for(i=n-k-1;i>=0;i--)
 {
    arr[i+k]=arr[i];
 }
 for(i=0;i<k;i++)
 {
    arr[i]=brr[i];
 }
 cout<<"Array after kth right rotate:";
 for(i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
 return 0;
}