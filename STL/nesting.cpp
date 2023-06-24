#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>,vector<int>> m;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string f_n,l_n;
        cin >> f_n >> l_n;
        int ct; cin >> ct;
        for (int j = 0; j  < ct; j++)
        {
            int x;
            cin >> x;
            m[{f_n,l_n}].push_back(x);
        }
    }
    for(auto &pr:m)
    {
        auto &pairs = pr.first;
        auto &vec = pr.second;
        cout << pairs.first << " " << pairs.second << endl;
        cout << vec.size() << endl;
        for(auto x: vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}