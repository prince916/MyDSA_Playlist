
// Pattern 2 :- Reverse Design
// * * * * * 
// * * * * 
// * * * 
// * * 
// *


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows : " << endl ;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < row; j++)
        {
            cout << " $ " ;
        }
        cout << endl;
    }
    
    return 0;
}