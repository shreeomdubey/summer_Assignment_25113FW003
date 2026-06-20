#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,p,i,j,k,arr[100][100],brr[100][100],crr[100][100];

  cout<<"Enter the value of rows of array_1:";
  cin>>n;
  cout<<"Enter the value of columns of array_1:";
  cin>>m;
  cout<<"Enter the value of column of array_2:";
  cin>>p;

  cout<<"Enter the elements of array_1:";
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
    cin>>arr[i][j];
    }
  }
  cout<<"Enter the elements of array_2:";
 for(i=0;i<m;i++){
    for(j=0;j<p;j++){
    cin>>brr[i][j];
    }
  }
     for(i=0;i<n;i++){
       for(j=0;j<m;j++){
        for(k=0;k<p;k++){
            crr[i][k]=arr[i][j]*brr[j][k];
        }
     }
   }
   for(i=0;i<n;i++){
        for(k=0;k<p;k++){
       cout<<crr[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}