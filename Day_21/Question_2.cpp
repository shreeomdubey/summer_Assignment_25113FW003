#include<iostream>
using namespace std;

int main()
{
    char arr[] = "Hello";

    int len = 0;
    while(arr[len] != '\0')
    {
        len++;
    }

    int start = 0;
    int end = len - 1;

    while(start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << arr;

    return 0;
}