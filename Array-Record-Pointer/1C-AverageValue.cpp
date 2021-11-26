// 1. (c) : Find the Average Value of an Array

#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    int sum = 0;

    int array_size;

    cout << "Enter Size of the Array : " << endl;
    cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter Element No " << i + 1 << ": " << endl;
        cin >> arr[i];
        sum += arr[i];
    }

    double averageValue = (double)sum / (double)array_size;

    cout << "Average Value is : " << setprecision(2) << averageValue << endl;
}