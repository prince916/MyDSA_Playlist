#include <bits/stdc++.h>
using namespace std;

// Updated

class Solution
{
public:
    int firstOccurance(int arr[], int n, int x)
    {
        int first = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                first = i;
                return first;
                break;
            }
        }
        return -1;
    }
    int lastOccurance(int arr[], int n, int x)
    {
        int last = -1;
        for (int i = n - 1; i >= 1; i--)
        {
            if (arr[i] == x)
            {
                last = i;
                return last;
                break;
            }
        }
        return -1;
    }

    vector<int> find(int arr[], int n, int x)
    {
        int i = firstOccurance(arr, n, x);
        int j = lastOccurance(arr, n, x);
        return {i, j};
    }
};

int main()
{
    int n, x;
    cin >> n, x;
    int arr[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    Solution ob;
    ans = ob.find(arr, n, x);
    cout << ans[i] << " ";

    return 0;
}
