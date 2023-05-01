#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> Students[5];
    int n;
    cin >> n;
    cout << "Enter the student's names" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Students[i].second;
        // cin >> Students[i].first;
    }
    cout << "Now enter their scores" << endl;
    for (int i = 0; i < n; i++)
    {
        // cin >> Students[i].second;
        cin >> Students[i].first;
    }
    sort(Students,Students+5);
    for(int i = 0; i < 5; i++)
    {
        cout << Students[i].second << "\t";
    }

    return 0;
}