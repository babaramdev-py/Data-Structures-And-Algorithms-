#include <bits/stdc++.h>
using namespace std;
int main() {
	map<int, multiset<string> > m1;
    string name;
    int n, marks;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> marks;
        m1[marks].insert(name);
    }
    for(auto &x: m1)
    {
        int marks = x.first;
        auto names = x.second;
        for(auto i: names){
            cout << i << " " << marks << endl;
        }

    }
}