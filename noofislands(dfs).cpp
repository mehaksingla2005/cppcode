class Solution {
private:
    void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>&grid){
        vis[row][col]=1;
        vector<pair<int,int> >help={{0,1},{0,-1},{1,0},{-1,0}};
        int n=grid.size();
        int m=grid[0].size();
        for(auto it:help){
            int delrow=row+it.first;
            int delcol=col+it.second;
            if(delrow>=0 && delcol>=0 && delrow<n && delcol<m && !vis[delrow][delcol] && grid[delrow][delcol]=='1'){
                dfs(delrow,delcol,vis,grid);
            }
            
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return cnt;

    }
};
