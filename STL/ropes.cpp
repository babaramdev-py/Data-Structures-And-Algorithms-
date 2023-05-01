#include <bits/stdc++.h>
using namespace std;

int RopeCutting(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }

    int subfinal = max(max(
        RopeCutting(n - a, a, b, c),
        RopeCutting(n - b, a, b, c)),RopeCutting(n - b, a, b, c));

    if (subfinal == -1)
    {
        return -1;
    }

    return subfinal + 1;
}

int main()
{
    cout << RopeCutting(5, 6, 5, 2) << endl;
    return 0;
}