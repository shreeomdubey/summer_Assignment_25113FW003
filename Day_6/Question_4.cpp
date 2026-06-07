#include<iostream>
using namespace std;
int main(){
    int x,n;
    long long result=1;
    cout<<"Enter a number and it's positive power: ";
    cin>>x>>n;
    if(x==0){
        cout<<x<<"^"<<n<<"= 0";
    }
    else{
         for(int i=1;i<=n;i++){
            result*=x;
        }
        cout<<x<<"^"<<n<<"= "<<result;
    }
    return 0;
}