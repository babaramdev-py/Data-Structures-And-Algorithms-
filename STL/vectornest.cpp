#include <bits/stdc++.h>
using namespace std;

void PrintVector(vector<int> &v)
{
    static int x = 1;
    cout << "For Vector  " << x << endl;
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    cout << endl;
    cout << "------------------------" << endl;
    x++;
}

int main()
{

    int N;
    cin >> N;
    vector<vector<int>> v; // Ten vectors with zero size!
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    /*
        For a vector of vectors, create a new temp vector, push back the temp vector in vector of vectors other wise it leads to segmentation fault
    */
    for (int i = 0; i < N; i++)
    {
        PrintVector(v[i]);
    }
    
    return 0;
}

/*
    Vector of pairs is a very common topic in Competitive programming.
*/