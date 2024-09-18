
O(3N) & O(2N)
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<=n-1;i++){
            if(ratings[i]>ratings[i-1])left[i]=left[i-1]+1;
            else left[i]=1;
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])right[i]=right[i+1]+1;
            else right[i]=1;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+max(left[i],right[i]);
        }
        return sum;
    }
};

O(2n) &O(N)

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> left(n);
       
        left[0]=1;
        
        for(int i=1;i<=n-1;i++){
            if(ratings[i]>ratings[i-1])left[i]=left[i-1]+1;
            else left[i]=1;
        }
        int curr=1;
        int right=1;
        int sum=max(1,left[n-1]);
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                curr=right+1;
                right=curr;
            }
            else {
                curr=1;
                right=1;
            }
            sum=sum+max(left[i],curr);
        }
       
        
        return sum;
    }
};


//O(N) & O(1)
class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum=1;
        int i=1;
        int n=ratings.size();
        if(n==1)return 1;
        while(i<n){
            if(ratings[i]==ratings[i-1]){
                sum+=1;
                i++;
                continue;
            }
            int peak=1;
            while(i<n && ratings[i]>ratings[i-1]){
                peak+=1;
                sum+=peak;
                i++;
            }
            int down=1;
            while(i<n && ratings[i]<ratings[i-1]){
                sum+=down;
                down+=1;
                i++;
            }
            if(down>peak){
                sum+=(down-peak);
            }
        }
        return sum;
    }
};
