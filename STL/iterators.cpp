#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12};
    // vector<int> :: iterator it;
    // for(it = v.begin(); it != v.end(); it++) // prefer it++ over it = it+1
    // {
    //     //v.begin() gives us an iterator the beginning of the array, v.end() to the element after the last element in the array
    //     cout << *it << endl;
    // }
    vector<pair<int, int>>::iterator pairt;
    vector<pair<int, int>> pair_v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    for (pairt = pair_v.begin(); pairt != pair_v.end(); pairt++)
    {
        cout << pairt->first << " " << pairt->second << endl;
    }


    vector<int> v = {1,2,3,5,6};
    vector<int>:: iterator it; // iterator to the type of container you want to iterate over
    for(it = v.begin(); it!=v.end(); it++)
    {
        cout << *it << endl; 
    }
    return 0;
}