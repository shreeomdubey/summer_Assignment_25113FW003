#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,i,j,arr[100],brr[100],crr[100];
  int count=0;
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
  cout<<"intersection elements of both arrays are given as:";
  for(i=0;i<n;i++)
  {
     for(j=0;j<m;j++)
      {
         if(arr[i]==brr[j])
         {
          crr[count]=arr[i];
          count++;
          brr[j]=-1;
          break;
         }
      }
  }
  for(i=0;i<count;i++)
  {
     for(j=i+1;j<count;j++)
      {
        if(crr[i]==crr[j])
        {
            crr[j]=-1;
        }
      }
      if(crr[i]!=-1)
    {
        cout<<crr[i]<<" ";
    }
   }
   
  return 0;
}