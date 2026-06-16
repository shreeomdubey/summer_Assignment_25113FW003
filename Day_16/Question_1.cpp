#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,arr[100],i;
  cout<<"Enter the value of n:";
  cin>>n;

 cout<<"Enter elements of array:";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int j=n-1;
  i=0;
  while(i<j)

  {
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
  cout<<"Array after reverse:";
 for(i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
 return 0;
}