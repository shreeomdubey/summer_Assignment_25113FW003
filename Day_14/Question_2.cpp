#include<iostream>
using namespace std;

int main()
{
  int n,i,arr[100],element,count=0;
 cout<<"Enter the value of n:";
 cin>>n;

 cout<<"Enter the value of element:";
 cin>>element;

cout<<"Enter the elements of array:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    if(arr[i]==element )
    {
        count++;
    }
}
cout<<"frequency of given element is:"<<count;
return 0;
}