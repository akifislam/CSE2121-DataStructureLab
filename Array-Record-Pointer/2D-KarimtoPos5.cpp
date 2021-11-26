// 2D - "Karim" to Position 5

#include <bits/stdc++.h>
using namespace std;

int array_size;
string arr[100000];

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

    // 1 2 3
    // = = 2  3

    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter a number to insert into sorted array : " << endl;
    string name;
    cin >> name;

    cout << "Enter the position : " << endl;

    int pos;
    cin >> pos;

    while (pos < 1 || array_size + 1 < pos)
    {
        cout << "Enter a valid position : " << endl;
        cin >> pos;
    }

    for (int i = array_size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = name;

    printArray();
}