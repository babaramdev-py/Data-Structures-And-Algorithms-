#include <bits/stdc++.h>
using namespace std;

void PatternPrinting(int n)
{
    if (n == 0)
    {
        return;
    }
    PatternPrinting(n - 1);
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\t";
    }
    cout << endl;
}

bool PalindromeCheck(string S, int lower, int upper)
{
    if (lower == upper)
    {
        return true;
    }
    if (lower > upper)
    {
        return true;
    }
    if (S[lower] == S[upper])
    {
        return PalindromeCheck(S, lower + 1, upper - 1);
    }
    else
        return false;
}

void rev(string &s, int lower, int upper)
{
    if (lower == upper)
    {
        return;
    }
    if (lower > upper)
    {
        return;
    }
    swap(s[lower], s[upper]);
    rev(s, lower + 1, upper - 1);
}

vector<int> MergeTwoSorted(vector<int> &arr1, vector<int> &arr2, vector<int> &result, int pointer1, int pointer2)
{
    if (pointer1 >= arr1.size() && pointer2 >= arr2.size())
    {
        return; // base case
    }

    if (pointer1 >= arr1.size())
    {
        for (int i = pointer2; i < arr2.size(); i++)
        {
            result.push_back(arr2[i]);
        }
        return;
    }

    if (pointer2 >= arr2.size())
    {
        for (int i = pointer1; i < arr1.size(); i++)
        {
            /* code */
        }
    }
}

int main()
{
    // PatternPrinting(10);
    string s = "DREAM";
    int end = s.length() - 1;
    rev(s, 0, end);
    cout << s << endl;
    return 0;
}

void permute(string str, int i, int j)
{
    if (i == j - 1)
    {
        cout << str << endl;
        return;
    }
    else
    {
        for (int k = i; k <= j - 1; k++)
        {
            swap(str[i], str[k]); // STL `swap()` used

            // recur for substring `str[i+1, n-1]`
            permute(str, i + 1, j);

            // backtrack (restore the string to its original state)
            swap(str[i], str[k]);
        }
    }   
}