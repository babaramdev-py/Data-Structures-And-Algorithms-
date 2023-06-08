#include <bits/stdc++.h>
using namespace std;


// Given N strings, print unique stringss
int main()
{
    set<string> s;
    int n;
    string x;
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << endl;
    for(auto x: s)
    {
        cout << x << endl;
    }
    return 0;
}