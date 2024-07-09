class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int nextIdleTime=0;
       long long netWaitTime=0;
        for(int i=0;i<customers.size();i++){
            nextIdleTime=max(nextIdleTime,customers[i][0])+customers[i][1];
            netWaitTime+=nextIdleTime-customers[i][0];
        }
        double avg_wait=static_cast<double>(netWaitTime)/customers.size();
        return avg_wait;
    }
};
