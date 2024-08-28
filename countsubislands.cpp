class Solution {
private:
    void bfs(int row,int col,vector<vector<int>>& grid1, vector<vector<int>>& grid2,vector<vector<int>> &vis,bool &isSubIsland){
        int n=grid2.size();
        int m=grid2[0].size();
        queue<pair<int,int>> q;
        q.push({row,col});
        vector<pair<int,int>> directions={{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty()){
            int currow=q.front().first;
            int currcol=q.front().second;
            q.pop();
            for(auto it:directions){
                int i=currow+it.first;
                int j=currcol+it.second;
                if(i>=0 && i<n && j>=0 && j<m && grid2[i][j]==1 && !vis[i][j]){
                    if(grid1[i][j]!=1){
                        isSubIsland=false;  
                    }
                    vis[i][j]=1;
                    q.push({i,j});
                }
            }
        }
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid2.size();
        int m=grid2[0].size();
        int count=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1 && !vis[i][j]){
                    bool isSubIsland=true;
                    if(grid1[i][j]!=1)isSubIsland=false;
                    bfs(i,j,grid1,grid2,vis,isSubIsland);
                    if(isSubIsland) {
                        count++;
                    }
                }
            }
        }return count;
    }
};
