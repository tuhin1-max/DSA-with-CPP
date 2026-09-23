#include<bits/stdc++.h>
using namespace std;
bool vis[200];
bool pathvis[105];
vector<int> adj_list[105];
bool cycle;
void dfs(int src){
    vis[src] = true;
    pathvis[src] = true;
    for(int child : adj_list[src]){
        if(vis[child] && pathvis[child]){
            cycle = true;
        }
        if(!vis[child]){
            dfs(child);
        }
    }
    //return
    pathvis[src] = false;
}
int main(){
    int n,e;
    cin >> n >> e;
    
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(vis,false,sizeof(vis));
    memset(pathvis,false,sizeof(pathvis));

    cycle = false;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(cycle){
        cout << "cycle deltected" << endl;
    }
    else{
        cout << "No cycle" << endl;
    }
    return 0;
}