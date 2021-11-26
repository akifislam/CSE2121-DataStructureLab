// 2D - "Karim" to Position 5

#include <bits/stdc++.h>
using namespace std;

int array_size;
string arr[100000];

void printArray()
{
    for (int i = 0; i < array_size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isPresent(string name)
{
    for (int i = 0; i < array_size; i++)
    {
        if (arr[i] == name)
            return true;
    }
    return false;
}

int main()
{

    cout << "Enter Size of the Array : " << endl;
    cin >> array_size;

    cout << "Enter elements of the sorted array : " << endl;

    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter a name to delete from the sorted array: " << endl;

    string name;
    cin >> name;

    while (!isPresent(name))
    {
        cout << "Enter the name perfectly." << endl;
        cin >> name;
    }

    int i = 0;
    for (i = 0; i < array_size; i++)
    {
        if (arr[i] == name)
            break;
    }

    while (i < array_size)
    {
        arr[i] = arr[i + 1];
        i++;
    }

    printArray();
}