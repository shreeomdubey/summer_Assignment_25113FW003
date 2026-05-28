#include <iostream>
using namespace std ;
 int main ()
 {
    int n,i,count=0;
    cout<<"enter the value of n :";
    cin >> n;
    while (n!=0)
    {
      n= n/10;
      count++;
    }
cout<<"total number of digits count is:"<<count;
return 0;
}