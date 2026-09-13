#include<bits/stdc++.h>
using namespace std;
vector<long long> adj_list[200000];
bool vis[200000];
long long level[200000];
long long parent[200000];

void dfs(long long src){
    queue<long long>q;
    q.push(src);
    level[src] = 0;
    vis[src] = true;

    while(!q.empty()){
        long long par = q.front();
        q.pop();

        for(long long child : adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            } 
        }
    }
}
int main(){
    long long n,e;
    cin >> n >> e;
    while(e--){
        long long a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));

    long long src=1,dst=n;
    dfs(src);
    
    vector<long long>path;
    long long node = dst;
    while(node != -1){
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(),path.end());
    
    if(vis[dst]){
        cout << path.size() << endl;
        for(long long x : path){
            cout << x << " ";
        }
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}