#include<iostream>
using namespace std;
int main()
{
   int arr[100],n;
   int odd=0,even=0;
   cout<<"Enter the value of n:";
   cin>>n;
   cout<<"Enter the elements of array:";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   for (int i=0;i<n;i++)
   {
    if(arr[i]<0)
    {
        cout<<"Invalid Element";
    }
    if(arr[i]%2==0)
    {
        even++;
    }
    else
    {
       odd++;
    }
   }
   cout<<"Count of even elements in array is:"<<even<<endl;
   cout<<"Count of odd elements in array is:"<<odd;
   return 0;
}
   