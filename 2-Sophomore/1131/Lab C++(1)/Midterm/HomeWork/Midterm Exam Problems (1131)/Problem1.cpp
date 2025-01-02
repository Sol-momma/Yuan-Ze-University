// Problem 1: 
// Given an array of integers, write a function that shifts all elements of the array to the right by k positions. Elements that are shifted past the end of the array should appear at the beginning. Do this in-place without using additional arrays.
// Input: An array of integers, arr[], and an integer k.
// Output: The array shifted by k positions to the right.
// Example:
// Input: arr = {1, 2, 3, 4, 5},   k = 2 (k is a positive integer.)

// Output: arr = {4, 5, 1, 2, 3}
// Constraints:  The array length is between 1 and 100.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rightShiftArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    if (k == 0) return;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    rightShiftArray(arr, k);

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}


