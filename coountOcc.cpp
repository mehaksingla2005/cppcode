int firstocc(int nums[], int n, int target) {
    int l = 0;
    int r = n - 1;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) {
            ans = mid;
            r = mid - 1;
        } else if (nums[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int lastocc(int nums[], int n, int target) {
    int l = 0;
    int r = n - 1;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) {
            ans = mid;
            l = mid + 1;
        } else if (nums[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int count(int arr[], int n, int x) {
    int first = firstocc(arr, n, x);
    if (first == -1) {
        return 0; // Target not found in the array
    }
    int last = lastocc(arr, n, x);
    return (last - first + 1);
}
