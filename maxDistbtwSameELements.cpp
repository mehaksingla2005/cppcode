
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map<int,int> firstOccurence;
        int maxDist=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(firstOccurence.find(arr[i])==firstOccurence.end()){
                firstOccurence[arr[i]]=i;
            }else{
                int dist=i-firstOccurence[arr[i]];
                maxDist=max(maxDist,dist);
            }
        }
        return maxDist;
    }
};

