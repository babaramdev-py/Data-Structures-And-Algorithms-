#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;
    // we created a vector of vectors
    // initially v is completely empty
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        // v.push_back(vector<int> ()); // initially we must enter an empty vector 
        // int n,x; 
        // cin >> n;
        // for(int j = 0; j < n; j++)
        // {
        //     cin >> x;
        //     v[i].push_back(x);
        // }
        // or
        int n, x;
        cin >> n;
        vector<int> temp;
        for(int j = 0; j < n; j++)
        {
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
        /* 
            Take input in temp;
            v.push_back(temp);
        */
        // cout << v.size() << endl; gives me the number of vectors in the 2d vector
    }
    v.pop_back(); // removes the last item
    v.push_back({3,5,2,10});
    for(auto x: v[0]){
        cout << x << endl;
    }
    // Print the vector
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] <<  " ";
        }
        cout << endl;
    }
    return 0;
}