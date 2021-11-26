// 2 B. - "RAHIM" into a Sorted Array.

#include <bits/stdc++.h>
using namespace std;

int array_size;
string arr[100000];

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
    arr[0] = "Aaaaaaa";
    arr[array_size + 1] = "Zzzzzzz";

    for (int i = 1; i <= array_size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter a number to insert into sorted array : " << endl;
    string name;
    cin >> name;

    for (int i = array_size; i >= 0; i--)
    {
        if (arr[i] < name && name <= arr[i + 1])
        {
            arr[i + 1] = name;
            break;
        }
        arr[i + 1] = arr[i];
    }

    printArray();
}