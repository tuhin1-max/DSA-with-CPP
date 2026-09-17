#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1007];
bool vis[1007];

int bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;

    int count = 1;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(int child : adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                count++;
            }
        }
    }

    return count;

}
int main(){
    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    int src;
    cin >> src;

    int res = bfs(src);

    cout << res << endl;

    return 0;
}

