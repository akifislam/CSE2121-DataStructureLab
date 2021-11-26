// 1. (d) : Find the Total Value of an Array

#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    int totalValue = 0;

    int array_size;

    cout << "Enter Size of the Array : " << endl;
    cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter Element No " << i + 1 << ": " << endl;
        cin >> arr[i];
        totalValue += arr[i];
    }

    cout << "Total Value is : " << totalValue << endl;
}