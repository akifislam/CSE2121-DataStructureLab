// 2 A. - 54 into a Sorted Array. 54 can be put anywhere.

#include <bits/stdc++.h>
using namespace std;

int array_size;
int arr[100000];

void printArray()
{
    for (int i = 1; i <= array_size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    cout << "Enter Size of the Array : " << endl;
    cin >> array_size;
    cout << "Enter elements of Sorted Array : " << endl;

    // 1 2 50 52 58 60
    arr[0] = -INT_MAX;
    arr[array_size + 1] = INT_MAX;

    for (int i = 1; i <= array_size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter a number to insert into sorted array : " << endl;
    int num;
    cin >> num;

    for (int i = array_size; i >= 0; i--)
    {
        if (arr[i] < num && num <= arr[i + 1])
        {
            arr[i + 1] = num;
            break;
        }
        arr[i + 1] = arr[i];
    }

    printArray();
}