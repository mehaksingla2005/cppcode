private:
    bool canWePlace(vector<int> &stalls,int mid, int k,int n){
        k--;
        int i=1;
        int lastPlaced=stalls[0];
        while(i<n){
            if((stalls[i]-lastPlaced)>=mid){
                k--;
                lastPlaced=stalls[i];
            }
            i++;
            if(k==0)return true;
        }
        
        return false;
    }
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int ans=-1;
        int start=1;
        int end=stalls[n-1]-stalls[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canWePlace(stalls,mid,k,n)){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }return ans;
    }
