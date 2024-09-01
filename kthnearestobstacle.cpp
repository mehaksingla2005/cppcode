  vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        vector<int> results;
        priority_queue<int> maxheap;
        for(int i=0;i<queries.size();i++){
            int x=queries[i][0];
            int y=queries[i][1];
            int dist=abs(x)+abs(y);
            
            maxheap.push(dist);
            
            if(maxheap.size()>k)maxheap.pop();
            
            if(maxheap.size()==k)results.push_back(maxheap.top());
            else results.push_back(-1);
        }
        return results;
    }
