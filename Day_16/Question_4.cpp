#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[100];

    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        bool duplicate = false;

        for(int j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}