#include <bits/stdc++.h>
using namespace std;

// Given n strings and q queries, check if the query occurs in the set of strings

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    string temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    cout << endl;
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> temp;
        if(s.find(temp) != s.end())
        {
            cout << "Present" << endl;
        }
        else{
            cout << "Not Present" << endl;
        }
    }
    return 0;
}