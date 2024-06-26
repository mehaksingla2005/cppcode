class Solution {
private:
    int finalDays(vector<int>& weights, int mid){
        int sum=0;
        int day=1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
                
            }else{
                    day++;
                    sum=weights[i];
                }
        }return day;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+= weights[i];
        }
        int ans=1;
        int low=*max_element(weights.begin(),weights.end());
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(finalDays(weights,mid)<=days){
                ans=mid;
                high=mid-1;
            }
           
            else low=mid+1;
        }return ans;
    }
};
