#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
    }

    bool found = false;

    sort(a.begin(),a.end());

    for(int i=0; i<n; i++){
        int low = i + 1;
        int high = n - 1;

        while(low < high){
            int current = a[i] + a[low] + a[high];
            if(current == target)
            {
                found = true;
            }
            if (current < target)
            {
                low++;
            }
            else {
                high--;
            }
            
        }
    }

    if(found){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }

    return 0;
}