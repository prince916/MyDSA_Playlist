#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even, odd;  
        
        // Separate even and odd numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                even.push_back(nums[i]);  // Even number found
            else
                odd.push_back(nums[i]);   // Odd number found
        }
        
        // Combine even and odd numbers, placing even numbers first
        for (int num : odd) {
            even.push_back(num);
        }
        
        return even;  // Return the sorted array
    }
};

int main()
{
    Solution ob;
    vector<int> nums={6,7,1,3,5,8};
    vector<int> ans;
    ans = ob.sortArrayByParity(nums);
    cout << "Array after sorting : " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
}