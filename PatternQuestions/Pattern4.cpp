using namespace std;
#include <bits/stdc++.h>
#include <iostream>
int main()
{
    int n;
    cout << "Enter ther value of n : " << endl;
    cin>>n;
    for (int i = n; i >= 1; --i) { 
        for (int j = 1; j <= i; ++j) { 
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}