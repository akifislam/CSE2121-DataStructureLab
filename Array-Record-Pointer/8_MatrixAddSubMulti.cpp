#include <bits/stdc++.h>
using namespace std;

int mat_1[1000][1000];
int mat_2[1000][1000];
int m, n;
int x, y;

void addition()
{
    if (m != n || n != y)
    {
        cout << "The dimension of two matrices should be exactly same." << endl;
        return;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat_1[i][j] + mat_2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----*-----" << endl;
}

void subtraction()
{
    if (m != n || n != y)
    {
        cout << "The dimension of two matrices should be exactly same." << endl;
        return;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat_1[i][j] - mat_2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----*-----" << endl;
}

void multiplication()
{
    if (m != x)
    {
        cout << "Incorrect Dimension for Matrix Multiplication" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int sum = 0;
            for (int k = 0; k < x; k++)
            {
                // Remember this line
                sum += (mat_1[i][k] * mat_2[k][j]);
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat_1[i][j];
        }
    }

    cin >> x >> y;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> mat_2[i][j];
        }
    }
    addition();
    subtraction();
    multiplication();
}