class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        int n=chalk.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=chalk[i];
        }
        int i=0;
        k=k%sum;
        while(i<n){
            if(chalk[i]>k)return i;
            k-=chalk[i];
            i++;
        }
        return -1;
    }
};
