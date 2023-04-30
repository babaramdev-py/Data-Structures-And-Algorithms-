#include <bits/stdc++.h>
using namespace std;

int referenceFxn(int *x, int n){
    int sum = 0,avg;
    for(int i = 0 ; i < n; i++)
    {
        sum = sum + x[i];
    }
    avg = sum/n;
    return avg;
}


int main()
{
    int array[5] = {1,2,3,4,5};
    int output = referenceFxn(array,5);
    cout << output << endl;
    cout << *(array+4) << endl; // the name of the array is basically a pointer.
    return 0;
}
/*
    here &x is a reference
*/