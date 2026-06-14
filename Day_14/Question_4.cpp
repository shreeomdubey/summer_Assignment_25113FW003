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
 cout<<"Duplicate element is";
 for(i=0;i<n;i++)
 {
    for(int j=i+1;j<n;j++)
    {
        if ( arr[i]==arr[j])
        {
            cout<<arr[i];
            arr[j]=-1;
            break;
        }
    }

 }
 return 0;
}