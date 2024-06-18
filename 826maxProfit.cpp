class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int maxprofit=0;
        vector<pair<int,int>> jobProfile;
        jobProfile.push_back({0,0});
        for(int i=0;i<profit.size();i++){
            jobProfile.push_back({difficulty[i],profit[i]});
        }
        sort(jobProfile.begin(),jobProfile.end());
        for(int i=0;i<jobProfile.size()-1;i++){
          jobProfile[i+1].second=max(jobProfile[i].second,jobProfile[i+1].second);  
        }
        for(int i=0;i<worker.size();i++){
            int l=0;
            int r=jobProfile.size()-1;
            int jobProfit=0;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(jobProfile[mid].first<=worker[i]){
                    l=mid+1;
                    jobProfit=max(jobProfit,jobProfile[mid].second);
                }else{
                    r=mid-1;
                }
            }
            maxprofit+=jobProfit;
        }

        return maxprofit;
    }
};
