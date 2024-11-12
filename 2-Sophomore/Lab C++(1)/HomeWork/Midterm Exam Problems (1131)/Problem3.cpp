// Problem 3:
// Given an array of integers, find all unique pairs of elements that add up to a target sum. Print each pair only once, in ascending order, even if the array contains duplicates.
// Input: An array of integers arr[] and an integer target.
// Output: All unique pairs [x, y] where x + y = target, printed in ascending order (e.g., [3, 5] instead of [5, 3]).

// Example:
// Input: arr = {1, 3, 2, 2, 3, 5},  target = 6
// Output: [1, 5], [3, 3]
// Constraints: Array length between 1 and 100.
// Each element can be between -100 and 100.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> findPairsWithSum(const vector<int>& arr, int target) {
    vector<pair<int, int>> result;

    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] == target) {
                int x = min(arr[i], arr[j]);
                int y = max(arr[i], arr[j]);
                bool isDuplicate = false;

                // 既存の結果に重複するペアがないかチェック
                for (const auto& p : result) {
                    if (p.first == x && p.second == y) {
                        isDuplicate = true;
                        break;
                    }
                }

                // 重複していなければ結果に追加
                if (!isDuplicate) {
                    result.push_back({x, y});
                }
            }
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 2, 2, 3, 5};
    int target = 6;

    vector<pair<int, int>> pairs = findPairsWithSum(arr, target);
    for (const auto& p : pairs) {
        cout << "[" << p.first << ", " << p.second << "] ";
    }
    return 0;
}
