
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    bool static comp(Item a,Item b){
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        sort(arr,arr+n,comp);
        double ans=0.0;
        int currWeight=0;
        for(int i=0;i<n;i++){
            if(currWeight+arr[i].weight<=w){
                currWeight+=arr[i].weight;
                ans+=arr[i].value;
            }
            else{
                int remain=w-currWeight;
                ans+=((double)arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
                
            }
        }
        return ans;
        
        
    }
};


