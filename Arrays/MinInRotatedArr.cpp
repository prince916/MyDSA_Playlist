#include <bits/stdc++.h>
using namespace std;


int findMin(vector<int>& arr)
{
	// Write your code here.
	int n = arr.size();

	int l=0;
	int h=n-1;
	int ans = INT_MAX;

	while(l<=h){
		int mid = (l+h)/2;	

		if(arr[l] <= arr[mid]){
			ans = min(ans,arr[l]);
			l = mid + 1;
		}
		else{
			ans = min(ans,arr[mid]);
			h = mid - 1;
		}
	}
	return ans;
}




int main()
{
    vector<int> arr = {7, 8, 9, 1, 3, 3, 3, 5, 6};
    int ans = findMin(arr);
    cout << "The index is at : " << ans << endl;
    return 0;
}
