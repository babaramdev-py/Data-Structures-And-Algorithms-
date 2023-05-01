#include <bits/stdc++.h>
using namespace std;

void Solve(int i, vector<int> &A, vector<vector<int>> &Ans, vector<int> temp)
{
    if(i == A.size())
    {
        Ans.push_back(temp);
        return;
    }
    temp.push_back(A[i]);
    Solve(i+1, A, Ans, temp);
    temp.pop_back();
    Solve(i+1, A, Ans, temp);
}
/* 
    My Solve function in hindsight does this:
        Takes a temporary vector
        Includes ith element in this temporary vector and generates subsets for the rest of the array.
        Pops the ith element in this temporary vector and generates subsets for the rest of the array.
        If my original array is  == 0, then I just push the temp Empty vector in there and end it. 
        Essentially what we do when we make a tree,


 */



int main()
{
    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> A = {1,2,3,4};
    Solve(0, A, ans, temp);
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}