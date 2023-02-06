#include <bits/stdc++.h>
using namespace std;

bool ReverseString(string A, string B)
{
    int position = -1;
    if(A.length() != B.length())
    {
        return false;
    }
    else
    {
        char first_let = A[0];
        for(int i = 0; i <= B.length(); i++)
        {
            if(first_let == B[i])
                position = i;
        }
        if(position == -1)
            return false;
        

        int i = 0, j = position, counter = 1;
        while(counter!= A.length() + 1)
        {
            if(A[i] == B[j])
            {
                i = (i + 1)%(A.length()); //Treat the array as circular queue.
                j = (j + 1)%(A.length());    
                counter++;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string a,b;
    cin >> a >> b;
    cout << ReverseString(a,b);
}

//Explanation:
/*
    1.) Store the 0th char of A in temp variable. constant
    2.) Find the position of occurence of temp var in String B. O(n) time
    3.) Start doing length of string size traversals from the matching index. O(n) time
    4.) In each traversal compare the current a to current b(Use circualar queue)
    5.) if a mismatch then return false
    6.) If there exists a match then continue the next n - 1 iterations till 0.
    7.) Finally if nothing is there then just return true

*/