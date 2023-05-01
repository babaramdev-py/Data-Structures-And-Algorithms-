#include <bits/stdc++.h>
using namespace std;

void Permute(string S,vector<string> &result,int i = 0){
    if(i == S.length() - 1)
    {
        result.push_back(S);
        return;
    }
    for(int k = i; k < S.length(); k++){
        swap(S[k],S[i]);
        Permute(S,result, i+1);
        swap(S[k],S[i]);
    }
}

int main()
{
    vector<string> ans;
    Permute("XYZ",ans,0);
    for(auto x: ans){
        cout << x << endl;
    }
    return 0;
}
