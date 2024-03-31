#include <bits/stdc++.h>
using namespace std;

int missingnumber(vector<int> &arr,int n){
    int xor1 = 0;
    int xor2 = 0;
    int N = n-1;
    for (int i = 0; i < N-1; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

int main()
{
    int n=5;
    vector<int> arr={1,2,4,5};

    int ans = missingnumber(arr, n);
    cout << "Missing Number is : " << ans <<endl;
    
    return 0;
}