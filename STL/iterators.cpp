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
    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }
    // Always de-reference iterators to print value stored at that location
    /*
        In Maps or sets iterators are not continous like Vectors, thus use it++
        
        
        Very important
        
        it++ moves the iterator to the next iterator
        it = it + 1 moves the iterator to the next memory address!
    
    */
    cout << endl;
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator g = v_p.begin();
    while (g != v_p.end())
    {
        cout << g->first << " " << g->second << endl;
        g++;
    }

    /*
        We can replace (*it).first and (*it).second with it->first and it->second
    */
    
    return 0;
}