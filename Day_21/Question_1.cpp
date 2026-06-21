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

    cout << "Length = " << len;

    return 0;
}
