class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int,int>>> adj_list(V);
        for(auto &edge : edges){
            int a = edge[0];
            int b = edge[1];
            int c = edge[2];
            
            adj_list[a].push_back({b,c});
            adj_list[b].push_back({a,c});
        }
        vector<int> dis(V, INT_MAX);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,src});
        dis[src] = 0;
        
        while(!pq.empty()){
            pair<int,int> par = pq.top();
            pq.pop();
            int par_node = par.second;
            int par_dis = par.first;
            
            for(auto child : adj_list[par_node]){
                int child_node = child.first;
                int child_dis = child.second;
                
                if(par_dis + child_dis < dis[child_node]){
                    dis[child_node] = par_dis + child_dis;
                    pq.push({dis[child_node],child_node});
                }
            }
        }
        
        return dis;  
        
    }
};