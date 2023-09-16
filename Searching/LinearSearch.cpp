#include <bits/stdc++.h>
using namespace std;

int elementfound(int arr[], int n, int key){
    for (int i = 0; i <= n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key you want to search : " << endl;
    cin >> key;

    int ans = elementfound(arr,n,key);

    cout << "The Element is found at : " << ans << endl;

    return 0;
}