#include <bits/stdc++.h>
using namespace std;

// Add Comment here

int findDuplicates(vector<int> &arr){

    int n = arr.size();
    sort(arr.begin(), arr.end());

    for(int i=0; i<n-1; i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
}

int main()
{
    vector<int> arr;
    arr = {1,3,3,4,5};
    // vector<int> arr = {1,2,3,4,4,5};
    cout << "Here is your Output : " << findDuplicates(arr) << endl;
    return 0;
}