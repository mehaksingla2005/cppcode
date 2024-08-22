

class Solution {
  private:
    vector<int> topoSort(int k,vector<int> adj[]){
        int vis[k]={0};
        stack<int> st;
        for(int i=0;i<k;i++){
            if(!vis[i])dfs(i,st,vis,adj);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
    void dfs(int node,stack<int> &st,int vis[],vector<int> adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it])dfs(it,st,vis,adj);
        }
        st.push(node);
    }
  public:
    string findOrder(string dict[], int n, int k) {
        // code here
        vector<int> adj[k];
        for(int i=0;i<n-1;i++){
            string s1=dict[i];
            string s2=dict[i+1];
            int m=min(s1.size(),s2.size());
            for(int j=0;j<m;j++){
                if(s1[j]!=s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        vector<int> topo=topoSort(k,adj);
        string ans="";
        for(auto it:topo){
            ans=ans+char(it+'a');
        }
        return ans;
    }
};

