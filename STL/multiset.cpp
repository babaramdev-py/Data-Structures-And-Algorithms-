#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<long long int> m;
    long long int t,n,k,x;
    long long int count = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> x;
        m.insert(x);
    }
    int newl;
    while(k--)
    {
        count = count + *(--m.end());
        newl = floor(*(--m.end())/2);
        m.erase(--m.end());
        m.insert(newl);
        cout << count << endl;
    }
    return 0;
}