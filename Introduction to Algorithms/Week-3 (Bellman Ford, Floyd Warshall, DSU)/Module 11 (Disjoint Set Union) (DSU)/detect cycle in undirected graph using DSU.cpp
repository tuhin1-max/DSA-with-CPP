#include<bits/stdc++.h>
using namespace std;

int par[1005];
int groupsize[1005];
int find(int node) //log(n)
{
    if(par[node]==-1){
        return node;
    }

    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(groupsize[leader1] > groupsize[leader2])
    {
        par[leader2] = leader1;
        groupsize[leader1] += groupsize[leader2];
    }
    else
    {
        par[leader1] = leader2;
        groupsize[leader2] += groupsize[leader1];
    }
}

int main()
{
    memset(par, -1, sizeof(par));
    memset(groupsize, 1, sizeof(groupsize));

    int n,e;
    cin >> n >> e;

    bool cycle = false;
    while(e--)
    {
        int  a,b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
        
        if(leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsu_union(a,b);
        }
    }
    
    if(cycle)
    {
        cout << "Cycle Detected." << endl;
    }
    else
    {
        cout << "No cycle." << endl;
    }
    return 0;
}
