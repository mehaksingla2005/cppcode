//brute

class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        long long cost=0;
        
        while(arr.size()>=2){
            sort(arr.begin(),arr.end());
            cost+=arr[0]+arr[1];
            arr.push_back(arr[0]+arr[1]);
            arr.erase(arr.begin());
            arr.erase(arr.begin());
        }
        return cost;
    }
};


//optimised

class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue<long long,vector<long long>,greater<long long>>minHeap(arr.begin(),arr.end());
        long long cost=0;
        while(minHeap.size()>1){
            long long first=minHeap.top();
            minHeap.pop();
            long long second=minHeap.top();
            minHeap.pop();
            long long newRope=first+second;
            cost+=newRope;
            minHeap.push(newRope);
        }
        return cost;
    }
};
