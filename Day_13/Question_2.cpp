#include<iostream>
using namespace std;
int main()
{
   int arr[100],n, sum=0;;
   cout<<"Enter the value of n:";
   cin>>n;
   cout<<"Enter the elements of array:";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
     sum=sum+arr[i];
   }
   int avg= sum/n;
   cout<< "sum of elements of array is:"<<sum<<endl;
   cout<<"Avg of elements of array is:"<<avg;
   return 0;
}