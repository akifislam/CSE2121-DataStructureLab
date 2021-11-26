// 2 A. - 54 into a Sorted Array. 54 must be put into the middle of the array. 
// If you want to insert 54 at first or at last, this program will not work.

#include <bits/stdc++.h>
using namespace std;

int array_size;
int arr[100000];

void printArray()
{
    for (int i = 0; i <= array_size; i++)
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

    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter a number to insert into sorted array : " << endl;
    int num;
    cin >> num;

    for (int i = array_size - 1; i >= 0; i--)
    {
        if (arr[i] < num && num < arr[i + 1])
        {
            arr[i + 1] = num;
            break;
        }
        arr[i + 1] = arr[i];
    }

    printArray();
}