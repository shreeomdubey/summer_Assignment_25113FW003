#include<iostream>
#include<climits>
using namespace std;
int main()
{
   int arr[100],n;
   cout<<"Enter the value of n:";
   cin>>n;
   cout<<"Enter the elements of array:";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   int max= INT_MIN;
   int min= INT_MAX;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
    }
    if(arr[i]<min)
    {
        min=arr[i];
    }
  }
  cout<<"Largest element of array is:"<< max<<endl;
  cout<<"Smallest element of array is:"<< min;
  return 0;
}