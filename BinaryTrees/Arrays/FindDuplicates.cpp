#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n) {
  sort(arr.begin(), arr.end());

  for (int i = 0; i < n; i++) {

    if (arr[i] == arr[i + 1]) {

      return arr[i];
    }
  }

  return -1;
}

int main()
{
    int n = 3;
    vector<int> arr = {1, 1, 2};
    cout << findDuplicate(arr,n);
    return 0;
}