#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    int array_size;
    cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i];
    }

    int item;
    cin >> item;

    for (int i = 0; i < array_size; i++)
    {
        if (arr[i] == item)
        {
            cout << "Found at postition : " << i + 1 << endl;
            return 0;
        }
    }

    cout << "Not Found" << endl;
}