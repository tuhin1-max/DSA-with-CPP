#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1007];
bool vis[1007];
int node_count = 0;

void dfs(int src){
    vis[src] = true;
    node_count++;
    for(int child : adj_list[src]){
        if(vis[child] == false){
            dfs(child);
        }
    }
}
int main(){
    int n,e;
    cin >> n >> e;

    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    memset(vis,false,sizeof(vis));

    vector<int> cnt;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            node_count = 0;
            dfs(i);
            cnt.push_back(node_count);
        }
    }

    sort(cnt.begin(),cnt.end());

    for(int x : cnt){
        cout << x << " ";
    }
    
    return 0;
}