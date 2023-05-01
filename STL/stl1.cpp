#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, input;
    cin >> n;
    vector<int> odd;
    vector<int> even;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input%2 == 0){
            even.push_back(input);
        }
        else{
            odd.push_back(input);
        }
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());

    cout << "Odd numbers are:" << endl;
    for(int x: odd){
        cout << x << "\t";
    }
    cout << endl;
    cout << "Even numbers are:" << endl;
    for(int y:even){
        cout << y << "\t";
    }
    
    return 0;
}