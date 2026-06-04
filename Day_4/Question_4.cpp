#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;

    cout << "Enter the limit: ";
    cin >> N;

    for(int num = 1; num <= N; num++)
    {
        int temp = num, digits = 0;
        long long sum = 0;

        // Count digits
        while(temp > 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while(temp > 0)
        {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if(sum == num)
        {
            cout << num << " ";
        }
    }

    return 0;
}