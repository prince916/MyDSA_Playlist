#include <bits/stdc++.h>
using namespace std;


int LowerBound(int arr[], int n, int key){
    int low=0;
    int high=n-1;
    int ans = n;

    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]>=key)
        {
            ans = mid;
            high = mid - 1;
        }
        else{
            low=mid+1;
        }
        
    }
    return ans;  
}


int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<< LowerBound(arr,n,key) << endl;
    return 0;
}