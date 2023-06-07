#include <bits/stdc++.h>
using namespace std;

void PrintMap(map<int,string> &m);
int main()
{
    map<int,string> m;
    m[1] = "abc"; // O(log N);
    m[3] = "cdc";
    m[5] = "efg";
    m.insert({4,"afg"});
    map<int,string>::iterator it;
    // for(it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    PrintMap(m);
    return 0;
}

void PrintMap(map<int,string> &m)
{
    cout << m.size() << " is the size of the map." << endl;
    for(auto x: m)
    {
        cout << x.first << " " << x.second << endl;
    }
}