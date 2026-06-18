#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,arr[100],i,j;
  cout<<"Enter the value of n:";
  cin>>n;

  cout<<"Enter the elements of array";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(i=0;i<n-1;i++)
  {
    int min=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min])
        {
            min=j;
        }
    }
    swap(arr[i],arr[min]);
  }
  for(i=0;i<n;i++)
   {
    cout<<arr[i];
   }
   return 0;
}