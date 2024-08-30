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



//same approach but diff code
class Solution {
private:
    void dfs(vector<vector<int>>& stones,int index,vector<bool> &vis){
        vis[index]=true;
        int n=stones.size();
        for(int i=0;i<n;i++){
       
                int r=stones[index][0];
                int c=stones[index][1];
                if(!vis[i] && (stones[i][0]==r || stones[i][1]==c)){
                    dfs(stones,i,vis);
                }
            
        }
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int cnt=0;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(stones,i,vis);
                cnt++;
            }
        }
        return n-cnt;
    }
};
