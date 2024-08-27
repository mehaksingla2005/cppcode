class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int,vector<pair<int,double>>>adj;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            double probVal=succProb[i];
            adj[u].push_back({v,probVal});
            adj[v].push_back({u,probVal});
        }

        vector<double> result(n,0);
        result[start_node]=1.0;
        priority_queue<pair<double,int>> q;
        q.push({1.0,start_node});
        while(!q.empty()){
            double currprob=q.top().first;
            int currnode=q.top().second;
            q.pop();
            for(auto &temp:adj[currnode]){
                int adjnode=temp.first;
                double adjprob=temp.second;

                if(result[adjnode]<adjprob*currprob){
                    result[adjnode]=adjprob*currprob;
                    q.push({result[adjnode],adjnode});
                }
            }
        }
        return result[end_node];
    }
};
