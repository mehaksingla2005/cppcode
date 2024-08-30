class Solution {
private:
    void dfs(vector<vector<int>> &adj,vector<bool> &vis,int index){
        vis[index]=true;
        for(int i:adj[index]){
            if(!vis[i]){
                dfs(adj,vis,i);
            }
        }
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<bool> vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj,vis,i);
                count++;
            }
        }
        return n-count;
    }
};
