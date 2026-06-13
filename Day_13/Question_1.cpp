#include<iostream>
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
   for (int i=0;i<n;i++)
   {
     cout<<arr[i]<<endl;
   }
   return 0;
}