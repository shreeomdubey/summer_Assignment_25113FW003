#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter n: ";
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int maxFreq = 0;
    int element;

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    }

    cout << "Maximum frequency element = " << element << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}