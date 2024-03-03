#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int arr[n] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int m=10;
    int a[m] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    sort(a+1, a+n);
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}