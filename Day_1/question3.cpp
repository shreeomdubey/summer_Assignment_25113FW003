#include <iostream>
using namespace std ;
 int main ()
 { 
    int n,i,factorial=1;
    cout<<"enter the value of n :";
    cin >> n;
    for(i=1; i<=n; i++)
    {
      factorial = factorial*i ;
    }
cout <<"value of factorial of n is: "<< factorial;
return 0;
 }