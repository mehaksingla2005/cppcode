class Solution {
public:
    bool canPlaceBalls(vector<int>& position, int m,int x){
        int lastpos=position[0];
        m=m-1;
        int i=1;
        while(i<position.size()&&m>0){
            if(position[i]>=lastpos+x){
                lastpos=position[i];
                i++;
                m--;

            }else{
                i++;
            }
        }
        if(m==0)return true;
        else return false;
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int answer=0;
        int low=1;
        int high=position[n-1]/(m-1);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canPlaceBalls(position,m,mid)){
                answer=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }return answer;

    }
};
