#include <bits/stdc++.h>
using namespace std;

int InsertElement(int *arr, int pos, int k, int cap)
{
    int n = sizeof(arr)/sizeof(arr[0]);
    if(cap == n - 1)
    {
        return 0;
    }
    else{
        
        for(int i = cap - 1; i >= pos - 1; i--){
            arr[i+1] = arr[i];
        }    
        arr[pos - 1] = k;
    }
    return 1;
}



int main()
{
    int arr[6] = {1,2,3,5,6};
    if(InsertElement(arr,2,19,5))
    {
        for(int i = 0; i < 6; i++)
        {
            cout << arr[i] << endl;
        }
    }
    else{
        cout << "Could not be inserted, Overflow" << endl;
    }
    return 0;
}