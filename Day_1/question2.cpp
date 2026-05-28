#include <iostream>
using namespace std ;
 int main ()
 {
  int n,i;
    cout<<"enter the value of n :";
    cin >> n;
    for (i=1; i<=10; i++)
    {
       int table;
       table = n*i ;
       cout<< table<<endl;
    }
    return 0;
 }