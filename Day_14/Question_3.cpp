#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,arr[100],key;
 cout<<"Enter the value of n:";
 cin>>n;

  cout<<"Enter the elements of array:";
  for(i=0;i<n;i++)
 {
    cin>>arr[i];
 }

 int max=INT_MIN;
 int second_max=INT_MIN;

 for(i=0;i<n;i++)
 {
  if(arr[i]>max)
  {
    second_max=max;
    max=arr[i];
  }

  else if(arr[i]>second_max && arr[i]!=max)
  {
    second_max=arr[i];
  }
 }
 cout<<"Second largest term in the array is:"<<second_max;
  return 0;
}