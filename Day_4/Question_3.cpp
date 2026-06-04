#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, temp, digits = 0;
    long long sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    // Count digits
    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate Armstrong sum
    while(temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}