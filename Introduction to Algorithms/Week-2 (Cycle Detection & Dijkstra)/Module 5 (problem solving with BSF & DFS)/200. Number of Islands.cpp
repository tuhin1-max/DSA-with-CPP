class Solution {
public:
    bool vis[305][305];
    int n,m;
    vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
    bool valid(int i,int j){
        if(i<0 || j<0 || j>=m || i>=n)
            return false;
        return true;
    }

    void dfs(int si,int sj,vector<vector<char>>& grid){
        vis[si][sj] = true;
        for(int i=0;i<4;i++){
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='1'){
                dfs(ci,cj,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        memset(vis,false,sizeof(vis));
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,grid);
                    cnt++;
                }
            }
        }

        return cnt;
    }
};