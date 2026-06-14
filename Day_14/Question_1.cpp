#include<iostream>
using namespace std;

int main()
{
  int n,i,arr[100],key;
 cout<<"Enter the value of n:";
 cin>>n;

 cout<<"Enter the value of key:";
 cin>>key;

cout<<"Enter the elements of array:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
  if(arr[i]==key)
  {
    cout<<"Element found at index:"<<i;
  }

}
return 0;
}