// 1. (e) : Find the Sin Value of an Array
// Sin() Function takes 'double' as input. So make sure to declare array as double arr[ ] ;

#include <bits/stdc++.h>
using namespace std;

double arr[100000];
const double PI = 3.1416;

int main()
{
    double sinValue;
    int array_size;

    cout << "Enter Size of the Array : " << endl;
    cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter Element No " << i + 1 << ": " << endl;

        cin >> arr[i];
        sinValue = sin((arr[i] * PI) / 180.00);
        cout << "Sin Value of " << arr[i] << " is : " << setprecision(2) << sinValue << endl;
    }
}
