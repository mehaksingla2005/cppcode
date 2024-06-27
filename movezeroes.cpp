#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& arr) {
    int n = arr.size();
    int nonZeroIndex = 0;

    // Iterate through the array and move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            if (nonZeroIndex != i) {
                arr[i] = 0; // Fill the original position with zero
            }
            nonZeroIndex++;
        }
    }
}

int main() {
    std::vector<int> arr = {0, 1, 0, 3, 12, 0, 0, 7};

    moveZeroes(arr);

    std::cout << "Array with zeroes moved to the end: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

