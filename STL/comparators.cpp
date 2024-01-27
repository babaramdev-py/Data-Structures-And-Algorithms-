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
int find(int x, int par[])
{
    if(par[x] == x)
    {
        return x;
    }
    return find(par[x], par);
}
void Union(int e1, int e2, int par[], int rank[])
{
    int urep = find(e1, par);
    int vrep = find(e2, par);

    if(urep == vrep)
    {
        return;
    }
    else
    {
        if(rank[urep] > rank[vrep])
        {
            par[vrep] = par[urep];
            return;
        }
        else if(rank[urep] < rank[vrep])
        {
            par[urep] = par[vrep];
            return;
        }
        else
        {
            par[vrep] = par[urep];
            rank[urep] += 1;
            return;
        }
    }
}
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
        if(find(arr[i].u,par) == find(arr[i].v, par))
        {
            return;
        }
        else
        {
            res = res + arr[i].wt;
            Union(arr[i].u, arr[i].v, par, rank);
            MST.push_back(arr[i]);
        }
    }
}
