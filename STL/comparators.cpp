#include <bits/stdc++.h>
using namespace std;


struct Edge{
    int u;
    int v;
    int wt;
    Edge(int s,int d, int w)
    {
        this->u = s; this->v = d; this->wt = w;
    }
};
int find(int x, int y, int par[]);
int Union();
bool myComp(Edge e1, Edge e2)
{
    return e1.wt < e2.wt; // sort in ascending order;
}
int Kruskal(Edge arr[], int n)
{
    int res = 0;
    int *par = new int[n];
    int *rank = new int[n];
    vector<Edge> MST;
    sort(arr, arr + n, myComp);
    for(int i = 0; i < n; i++)
    {   
        par[i] = i;
        rank[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(find(arr[i].u, arr[i].v,par))
        {
            return;
        }
        else
        {
            res = res + arr[i].wt;
            Union();
            MST.push_back(arr[i]);
        }
    }
}
int main()
{
    
    return 0;
}