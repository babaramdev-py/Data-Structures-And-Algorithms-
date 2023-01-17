#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int sum = 0;
    long long int n;
    cin >> n;
    if(n%2 == 1)
    {
        sum = -(n+1)/2;
    }
    else
    {
        sum = n/2;
    }
    cout << sum << endl;
    return 0;
}