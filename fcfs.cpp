class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        vector<int> wt;
        vector<int> ct;
        for(int i=0;i<customers.size();i++){
            if(i==0){
                ct.push_back(customers[i][0]+customers[i][1]);
                
            }else{
                if(customers[i][0]<=ct[i-1]){
                    ct.push_back(ct[i-1]+customers[i][1]);
                }else{
                    ct.push_back(customers[i][0]+customers[i][1]);
                }
                

            }wt.push_back(ct[i]-customers[i][0]);
        }
        double avg_wt=0;
        for(int i=0;i<wt.size();i++){
            avg_wt+=wt[i];
        }avg_wt=avg_wt/wt.size();
        return avg_wt;
    }
};
