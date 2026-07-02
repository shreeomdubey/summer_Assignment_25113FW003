#include<bits/stdc++.h>
using namespace std;

int main(){
 int m,n,i, arr[100],brr[100],crr[100];
 
 cout<<"Enter the number of elements in array 1st:";
 cin>>n;
 cout<<"Enter the number of elements in array 2nd:";
 cin>>m;

 cout<<"Enter the elements of first array:";
 for(i=0;i<n;i++){
    cin>>arr[i];
 }
 cout<<"Enter the elements of 2nd array:";
 for(i=0;i<m;i++){
    cin>>brr[i];
 }
 for(i=0;i<n;i++){
    crr[i]=arr[i];
 }
 for(i=n;i<m+n;i++){
    crr[i]=brr[i-n];
 }
sort(crr,crr+(n+m));
for(i=0;i<n+m;i++){
    cout<<crr[i]<<" ";
}
return 0;
}