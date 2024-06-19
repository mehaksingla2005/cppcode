class Solution {
public:
    int getNoOfBouquets(vector<int>& bloomDay, int mid, int k) {
        int numOfBouquets = 0;
        int count = 0;
        
        for (int i = 0; i < bloomDay.size(); ++i) {
            if (bloomDay[i] <= mid) {
                count++;
            } else {
                count = 0;
            }
            
            if (count == k) {
                numOfBouquets++;
                count = 0;
            }
        }
        
        return numOfBouquets;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (m * k > bloomDay.size()) return -1;
        
        int start = 0;
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int minDays = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (getNoOfBouquets(bloomDay, mid, k) >= m) {
                minDays = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return minDays;
    }
};
