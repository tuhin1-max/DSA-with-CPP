class Solution {
  public:
    bool vis[100005];
    int parent[100005];
    bool cycle;
    
    void bfs(int src,vector<vector<int>>& adj_list){
        queue<int> q;
        q.push(src);
        vis[src] = true;
        
        while(!q.empty()){
            int par = q.front();
            q.pop();
            for(int child : adj_list[par]){
                if(vis[child] && parent[par]!=child){
                    cycle = true;
                }
                if(!vis[child]){
                    parent[child] = par;
                    bfs(child,adj_list);
                }
            }
            
        }
        
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        memset(vis,false,sizeof(vis));
        memset(parent,-1,sizeof(parent));
        
        vector<vector<int>> adj_list(V);
        for(auto edge : edges){
            int a = edge[0];
            int b = edge[1];
            
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        
        cycle = false;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bfs(i,adj_list);
            }
        }
        
        return cycle;
        
    }
};