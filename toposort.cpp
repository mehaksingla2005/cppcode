
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int node,int vis[],stack<int> &st,vector<int> adj[]){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it])dfs(it,vis,st,adj);
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int>st;
	    int vis[V]={0};
	    for(int i=0;i<V;i++){
	        if(!vis[i])dfs(i,vis,st,adj);
	    }
	    vector<int> ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};

