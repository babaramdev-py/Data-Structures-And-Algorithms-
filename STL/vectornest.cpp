#include <bits/stdc++.h>
using namespace std;


void PrintVector(vector<pair<int,int>> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << "First element is " << v[i].first << " Second element is " << v[i].second << endl;
    }
}

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {4, 5}};
    PrintVector(v);
    return 0;
}