// 1. (a) : Find the Maximum Value of an Array

#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    int maximum_value = -INT_MAX; // Initialized -2147834647
    int array_size;

    cout << "Enter Size of the Array : " << endl;
    cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter Element No " << i + 1 << ": " << endl;
        cin >> arr[i];
        if (maximum_value < arr[i])
            maximum_value = arr[i];
    }

    cout << "Maximum Value is : " << maximum_value << endl;
}