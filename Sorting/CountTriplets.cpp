#include <bits/stdc++.h>
using namespace std;

int countTriplet(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 0;
    
    for (int i = n - 1; i >= 2; i--)
    {
        int start = 0;
        int end = i - 1;
        while (start < end)
        {
            if (arr[start] + arr[end] == arr[i])
            {
                count++;
                start++;
                end--;
            }
            else if (arr[start] + arr[end] < arr[i])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << countTriplet(arr,n) << " ";
    return 0;
}