// Problem 5: 
// Given an array of non-negative integers and a target sum, determine if there is a contiguous subarray (of any length) that sums up to the target.
// Input: An array of non-negative integers arr[] and an integer target.
// Output: Return true if a subarray with sum equals target exists, otherwise return false.

// Examples:
// Input: arr = {1, 4, 20, 3, 10, 5},  target = 33
// Output: true   // because the subarray {20, 3, 10}  sums to 33

// Input: arr = {1, 4, 0, 0, 3, 10, 5}, target = 7
// Output: true  // subarray {4, 0, 0, 3} sums to 7
// Constraints: Array length is between 1 and 100.
// Each element can be between 0 and 100.

#include <iostream>
#include <vector>

using namespace std;

bool subarrayWithTargetSum(const vector<int>& arr, int target) {
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < arr.size(); ++end) {
        currentSum += arr[end];

        while (currentSum > target && start <= end) {
            currentSum -= arr[start];
            start++;
        }

        if (currentSum == target) return true;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 4, 20, 3, 10, 5};
    int target = 33;

    cout << (subarrayWithTargetSum(arr, target) ? "true" : "false") << endl;
    return 0;
}
