class Solution {
public:
    bool isValid(vector<int>& arr2,vector<int>& arr1){
        for(int i=0;i<26;i++){
            if(arr2[i]<arr1[i])return false;
        }
        return true;
    }
    long long validSubstringCount(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(n<m)return 0;
        long long result=0;
        vector<int> arr1(26,0);
        for(int i=0;i<m;i++){
            arr1[word2[i]-'a']++;
        }
        int left=0;
        vector<int> arr2(26,0);
        for(int right=0;right<n;right++){
            arr2[word1[right]-'a']++;
            while(isValid(arr2,arr1)){
                result+=n-right;
                arr2[word1[left]-'a']--;
                left++;
            }

        }
        return result;
    }
};
