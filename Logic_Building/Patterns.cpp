#include <bits/stdc++.h>
using namespace std;

void pattern1(){
    /*  ****
        ****
        ****
        ****
        ****   */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern4()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        
        // for (int j = 0; j <= n-i-1; j++)
        // {
        //     cout << "*";
        // }
        cout << endl;
    }
}

int main()
{
    // pattern1();
    // pattern2();
    // pattern3();
    pattern4();
    return 0;
}