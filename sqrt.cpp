//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        // long long int ans=0;
        // for( long long int i=1;i<=n;i++){
        //     long long int val=i*i;
        //     if(val<=n){
        //         ans=i;
        //     }
        // }
        // return ans;
        // long long int ans=sqrt(n);
        // return ans;
        long long int low=1;
        long long int high=n;
        while(low<=high){
            long long int mid=low+(high-low)/2;
            long long int val=mid*mid;
            if(val<=n){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
