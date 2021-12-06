#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    cout << "Enter the size of the array : " << endl;
    int array_size;
    cin >> array_size;

    cout << "Array Elements : " << endl;
    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i]; // 1 2 3 4 5
    }

    int item;
    cin >> item;

    int left = 0;
    int right = array_size - 1;

    while (left <= right)
    {
        int mid = (left + right + 1) / 2; // 3
        if (arr[mid] == item)
        {
            cout << "Found at Position : " << mid + 1 << endl;
            return 0;
        }
        if (arr[mid] < item)
            left = mid + 1;
        if (arr[mid] > item)
            right = mid - 1;
    }
    cout << "Not Found" << endl;
}