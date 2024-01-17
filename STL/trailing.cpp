#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, curr, count = 0;
    cin >> n;
    for(int i = n; i >= 5; i--)
    {
        if(i%5 == 0)
        {
            curr = i;
            while(curr % 5 == 0)
            {
                count++;
                curr = curr/5;
            }
        }
    }
    cout << count << endl;
    return 0;
}