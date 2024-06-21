class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        if(n==1)return customers[0];
        int maxUnrealised=0;
        int i=0;
        while(i<=n-minutes){
            int unrealised=0;
            for(int k=i;k<i+minutes;k++){
                if(grumpy[k]==1){
                    unrealised+=customers[k];
                }
                maxUnrealised=max(unrealised,maxUnrealised);
            }i++;
        }
        int totalCustomers=maxUnrealised;
        for(int i=0;i<n;i++){
            totalCustomers+=customers[i]*(1-grumpy[i]);
        }
        return totalCustomers;
    }
};
