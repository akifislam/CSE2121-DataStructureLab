#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int value = 77;
    int arr[n]; //N

    // 0 theke <N
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int low = 0, high = n-1, mid;

    while (low<=high)
    {
        mid = (high+low)/2;

        if(arr[mid] == value) {
            //mid == value;
            cout << "Value is found at index: " << mid << endl;
            return 0;
        }

        else if(arr[mid] > value) {
            high = mid - 1;
        }
      
        else {
            low = mid+1;
        }
        //cout << "Value not found" << endl; 
    }
     cout << "Value not found" << endl;  
}