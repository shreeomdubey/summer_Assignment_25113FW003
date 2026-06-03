#include<iostream>
using namespace std;

int main()
{
 int m,n,i;
 cout<<"Enter the value of m: ";
 cin>>m;
 cout<<"All the prime numbers up to m are: " ;
 for(n=2;n<=m;n++)
 {
   int count=0;
   for(i=2; i<n; i++)
  {
     if(n%i==0)
    {
     count=count+1;
    }
  }  
    if(count==0)
      {
        cout<<n<<endl;
      }
    
 }
return 0;
}