#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1,2,3,4,5,6,7};
    // for(int x: v){
    //     cout << x << endl;
    // }
    vector<vector<int>> vo = {{1,2,3},{4,5,6},{7,8,9}};
    for(vector<int> a : vo)
    {
        for(int b : a)
        {
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}