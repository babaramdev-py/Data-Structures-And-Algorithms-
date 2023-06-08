#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 65;
    unordered_map<int,char> m;
    for(int i = 0; i < 10; i++)
    {
        m[i] = a;
        a++;
    }
    for(auto x: m)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}