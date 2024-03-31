#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string a, string b)
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    string a, b;
    cin >> a >> b;
    Solution obj;
    if (obj.isAnagram(a, b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}