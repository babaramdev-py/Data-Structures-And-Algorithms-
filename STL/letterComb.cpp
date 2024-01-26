#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sol(vector<string> &keys, string &inp, vector<string> &ans, int k, string temp)//k is used to keep track of pointer in temp which is initially empty.
    {
        if(k == inp.length())
        {
            ans.push_back(temp);
            return;
        }
        for(int i = 0; i < inp.size(); i++)
        {
            int c = inp[i] - '0'; // basically find the int value of that char at that string.
            string map_inp = keys[c];
            for(int j = 0; j < map_inp.length(); j++)
            {
                // fix the kth character in the temp string;
                temp = temp.append(1,map_inp[j]);
                //recursively do the same for the rest of the string or remaining string.
                sol(keys,inp,ans,k+1,temp);
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> keys={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        sol(keys,digits,ans,0,"");
    }
};