#include <bits/stdc++.h>
using namespace std;

int arr[10000];

int main()
{
    cout << "Number of element in 1st Array : " << endl;

    int n;
    cin >> n;

    int temp_arr[n];

    cout << "Enter the elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_arr[i];
    }

    cout << "Number of element in 2nd Array : " << endl;
    int m;
    cin >> m;

    int temp_arr2[m];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> temp_arr2[i];
    }

    int k = 0;

    int merged_arr[m + n];

    for (int i = 0; i < n; i++)
    {
        merged_arr[k++] = temp_arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        merged_arr[k++] = temp_arr2[i];
    }

    // Print

    for (int i = 0; i < m + n; i++)
    {
        cout << merged_arr[i] << " ";
    }
    cout << endl;
}
