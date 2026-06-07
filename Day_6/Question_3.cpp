#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter a Decimal Number: ";
    cin>>n;
    while(n>0){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
    cout<<"Set bits in the given number are: "<<count;
    return 0;
}