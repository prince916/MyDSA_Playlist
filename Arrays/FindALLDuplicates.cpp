#include <bits/stdc++.h>
using namespace std;

// Add Comment Here

int findAllDuplicates(vector<int> &arr, int n){
    stack<int> st;
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
            st.push(arr[i]);
        }
    }

    return -1;

}

int main()
{
    int n = 4;
<<<<<<< HEAD
    vector<int> arr = {1,1,2,3,4,5};
=======
    vector<int> arr = {1,1,2,3,4,4,5};
>>>>>>> 9a568a5ef3642c483c67b99f8b5a47701dfb3ed0
    cout<<"Here is your Output"<< findAllDuplicates(arr,n) <<endl;
    return 0;
}