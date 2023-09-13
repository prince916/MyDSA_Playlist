#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    set<int> st;
    vector<int> Union;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    { 
        cin>>arr1[i]; 
    }
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    { 
        cin>>arr2[i]; 
    }
    
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }

    
    for ( auto & it:st)
    {
        Union.push_back(it);
    }
    
    cout << "Union of arr1 and arr2 is : " << endl;

    for (auto & val: Union)
    {
        cout << val << " ";
    }
    
    
    return 0;
}