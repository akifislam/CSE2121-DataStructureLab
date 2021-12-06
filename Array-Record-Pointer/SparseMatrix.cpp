#include <bits/stdc++.h>
using namespace std;

int triangular_mat[3][3] = {
    {1, 0, 0},
    {2, 3, 0},
    {4, 5, 6}};

int Saveinto1D(int x, int y)
{

    // Number of Non Zero Elements : N(N+1)/2

    const int n = 3;
    const int SIZE_1D = (n * (n + 1)) / 2;
    int arr[SIZE_1D];

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (triangular_mat[i][j] != 0)
                arr[k++] = triangular_mat[i][j];
        }
    }

    cout << "1D Array :" << endl;
    for (int i = 0; i < SIZE_1D; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Locating (x,y) element of Triangular matrix;

    int f = ((x * (x - 1)) / 2) + y;

    return arr[f - 1];
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << Saveinto1D(x, y) << endl;
}
