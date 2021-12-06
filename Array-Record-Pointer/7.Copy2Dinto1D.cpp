#include <bits/stdc++.h>
using namespace std;

int arr1D[1000];
int arr2D[1000][1000];
int n, m;

void rowPrint(int row_no)
{
    for (int i = 0; i < n; i++)
    {
        cout << (row_no - 1) * m + i + 1 << " ";
    }
    cout << endl;
}

void columnPrint(int column_no)
{
    for (int i = 0; i < m; i++)
    {
        cout << (column_no - 1) * n + i + 1 << endl;
    }
    cout << endl;
}

int main()
{

    cin >> n >> m;

    // Saving in Row Major
    int k = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2D[i][j];
            arr1D[k++] = arr2D[i][j];
        }
    }

    cout << "Enter the no of row to print :" << endl;
    int row_no;
    cin >> row_no;
    cout << endl;

    cout << "Enter the no of column to print :" << endl;

    int column_no;
    cin >> column_no;
}