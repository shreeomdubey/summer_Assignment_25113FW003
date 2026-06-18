#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,arr[100],i,mid,key;
  cout<<"Enter the value of n:";
  cin>>n;

  cout<<"Enter the value of key:";
  cin>>key;

  cout<<"Enter the elements of array";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int start=0,end=n;
 
  for(i=start;i<end;i++)
  {
     mid =(start+end)/2;

    if(key==arr[mid])
    {
        cout<<"Element found";
    }
    else if(key>mid)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;

    }
  }
  return 0;
}
