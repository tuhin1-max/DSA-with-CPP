#include<bits/stdc++.h>
using namespace std;
char adj_list[1005][1005];;
bool vis[1005][1005];
int n,m;
vector<pair<int,int>> d = {{1,0},{0,1},{0,-1},{-1,0}};
bool valid(int i,int j){
    if(i<0 || j<0 || i>=n || j>=m){
        return false;
    }
    return true;
}
void dfs(int si,int sj){
    vis[si][sj] = true;
    for(int i=0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && adj_list[ci][cj]=='.'){
            dfs(ci,cj);
        }
    }
}
int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> adj_list[i][j];
        }
    }

    memset(vis,false,sizeof(vis));

    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && adj_list[i][j]=='.'){
                cnt++;
                dfs(i,j);
            }
        }
    }

    cout << cnt << endl;
    return 0;
}