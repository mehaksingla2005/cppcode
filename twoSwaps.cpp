
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int swaps=0;
        for(int i=0;i<arr.size();i++){
            while(arr[i]!=i+1){
                swap(arr[i],arr[arr[i]-1]);
                swaps++;
            }
        }
        if(swaps==0 || swaps==2)return true;
        return false;
    }
};

