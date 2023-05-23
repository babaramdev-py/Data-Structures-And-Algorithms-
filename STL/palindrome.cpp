#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original = n;
    int k;
    int temp = 0;
    while(n != 0)
    {
        k = n%10;
        temp = temp*10 + k;
        n = n/10;
    }
    cout << endl;

    cout << temp == original;
    return 0;
}