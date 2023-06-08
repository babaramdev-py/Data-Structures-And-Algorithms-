#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int N;
    cin >> N;
    string x;
    map<string,int> m;
    for(int i = 0; i < N; i++)
    {
        cin >> x;
        if(m.find(x) == m.end())
        {
            m[x] = 1;
        }
        else{
            m[x] = m[x]+1;
        } 
    }
    for(auto x: m)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}