class Solution {
private:
    int findPivotIndex(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (nums[i] <= pivot && i < high) i++;
            while (nums[j] > pivot && j > low) j--;
            if (i < j) swap(nums[i], nums[j]);
        }
        swap(nums[low], nums[j]);
        return j;
    }

    void quicksort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pivotIndex = findPivotIndex(nums, low, high);
            quicksort(nums, low, pivotIndex - 1);
            quicksort(nums, pivotIndex + 1, high);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};
