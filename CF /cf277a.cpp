#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int sum = 0;
    long long int n;
    cin >> n;
    for(long long int i = 1; i <=n ;i++)
    {
        if(i%2 == 1)
            sum = sum - i;
        else
            sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}