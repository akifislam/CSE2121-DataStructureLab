// 1. (b) : Find the Minimum Value of an Array

#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    int minimum_value = INT_MAX; // Initialized -2147834647
    int array_size;

    cout << "Enter Size of the Array : " << endl;
    cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter Element No " << i + 1 << ": " << endl;
        cin >> arr[i];
        if (minimum_value > arr[i])
            minimum_value = arr[i];
    }

    cout << "Minimum Value is : " << minimum_value << endl;
}