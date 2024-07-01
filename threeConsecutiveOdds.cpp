class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0;
        int cnt=0;
      while(i<arr.size()){
        if(arr[i]%2!=0){
            cnt++;
            i++;
        }else{
            cnt=0;
            i++;
        }if(cnt==3)return true;
      }  return false;
    }
};
