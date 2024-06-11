class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        long long arr3[n+m];
        int i=0;
        int j=0;
        int ind=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                arr3[ind++]=nums2[j++];
            
            }else{
                arr3[ind++]=nums1[i++];
            }
            
        }
        while(i<m){
            arr3[ind++]=nums1[i++];
        }while(j<n){
            arr3[ind++]=nums2[j++];
        }
        for(int i=0;i<n+m;i++){
           
                nums1[i]=arr3[i];
            
        }
    }
};
