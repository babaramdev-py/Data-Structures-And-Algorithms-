// A course from Luv on YT.

// Tutorials on pairs

// Notes

/*
    There is a huge difference between pointers and references

    Pointer: A pointer is a variable that holds the memory address of another variable

    Reference variables: A reference variable is like an alias, just a new name for the existing variable.

    For a reference variable the compiler automatically applies the '*' symbol for us.


    For online judge always declare the arrays or vectors to be use in code globally as they can have size 1e+7 but locally it is only 1e+5


*/
#include <bits/stdc++.h>
using namespace std;

void PrintVector(vector<int> &v)
{
    cout << endl << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return;
}



int main()
{
    pair<int, string> a;
    a = make_pair(2, "bc");
    pair<int, string> b;
    b = a;

    pair<int, string> &c = a;

    cout << a.first << " " << a.second << endl;
    cout << b.first << " " << b.second << endl;

    cout << "Values of C pair " << c.first << " " << c.second << endl;

    // reason for using a pair
    /*
        To establish a relationship between two elements.
    */

    // vectors

    /*
        Dynamic sized arrays
    */

    int x;
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    PrintVector(v);




    /*
        Vector operations
    
    */

    vector<int> temp(5,1); // make  a vector of size 5 and fill all the elements as 1

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    vector<int> temp2 = temp;
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp2[i] << " ";
    }
    return 0;
}

/*
    vectors are also passed by values inside functions

    void func(vector<int> a) creates a new vector a copied to the values of the actual parameter when called upon

    void func(vector<int> &a) creates a vector reference to a formal parameter passed   

*/