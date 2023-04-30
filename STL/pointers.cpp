#include <bits/stdc++.h>
using namespace std;

struct Temp
{
    int data;
    int day;
};

int main()
{
    Temp x = {12, 13};
    Temp &r = x;
    Temp *b = &r;
    cout << x.data << " " << x.day << endl;
    cout << r.data << " " << r.day << endl;
    cout << b->data << " " << b->day << endl;

    r.data += 1;
    r.day += 1;
    cout << "Now value of R has changed" << endl;

    cout << r.data << " " << r.day << endl;
    cout << x.data << " " << x.day << endl;
    cout << "Now value of B has changed" << endl;
    b->data += 1;
    b->day += 1;
    cout << b->data << " " << b->day << endl;
    cout << r.data << " " << r.day << endl;
    cout << x.data << " " << x.day << endl;

    int a[] = {1, 2, 3, 4};
    // cout << a << end;
    cout << *a << endl;
    *a = *a + 1;
    cout << *a << endl;
    cout << "--------------------" << endl;
    for (int i : a)
    {
        cout << i << endl;
    }
    int n;
    cout << "Enter the number of elements in your dynamic array" << endl;
    cin >> n;
    int *ptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << "\t";
    }
    return 0;
}

void PointerToFunction(int *ptr, int n)
{
    for(int i = 0; i < n; i++){
        
    }
}