
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int,int>> meet;
        for(int i=0;i<n;i++){
            meet.push_back({start[i],end[i]});
        }
        sort(meet.begin(),meet.end(),[](pair<int,int> meet1,pair<int,int>meet2){
            return meet1.second<meet2.second;
        });
        int cnt=1;
        int lastEndTime=meet[0].second;
        for(int i=1;i<n;i++){
            if(meet[i].first>lastEndTime){
                cnt++;
                lastEndTime=meet[i].second;
            }
        }
        return cnt;
        
    }
};

