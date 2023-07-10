#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <char> st;
    string ip;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ip;
        for(int j = 0; j < ip.length(); i++)
        {
            if(ip[j] == '{' || ip[j] == '[' || ip[j] == '(')
                st.push(ip[j]);
            else
                if(ip[j] == ')' && st.top() == '(')
                    st.pop();
                else if(ip[j] == '}' && st.top() == '{')
                    st.pop();
                else if(ip[j] == ']' && st.top() == '[')
                    st.pop();
                else
                    cout << "NO" << endl;
                    break;
        }
        if(st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}