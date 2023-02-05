#include <bits/stdc++.h>
using namespace std;
/*
    What are iterators and why use them?
    Maps, Sets require Iterators because they have no indexing like Vectors
    Maps, Sets etc are stored as Binary Search trees or other such Data Structures

    iterator points to an element of a container

    Iterator pointing to the first element of a container is called as  .begin() iterator
    Iterator poiniting to the element after the last is called .end() iterator




*/










int main()
{
    vector<int> v = {2,3,5,6,7};
    vector<int> :: iterator it = v.begin();
    cout << *it << endl;
    return 0;
}