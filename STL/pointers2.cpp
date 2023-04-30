#include <bits/stdc++.h>
using namespace std;



void Swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout <<"\n";
    cout << a <<"\t" << b << endl;
    Swap(&a,&b);
    cout << a <<"\t" << b << endl;
    return 0;
}

/* 
    The idea is simple,
    To pass by reference we have two approaches
    Pass using Pointers
    Pass using References.

        

 */