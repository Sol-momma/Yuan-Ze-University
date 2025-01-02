// Problem 4:
// Given a square matrix, calculate the absolute difference between the sums of its diagonals.
// Input: A 2D array matrix of size n x n.
// Output: An integer representing the absolute difference.
// Example:
// Input:
// 11    2      4
//  4      5      6
// 10    8   -12
// Output: 15  // Absolute difference = |11 + 5 - 12 - (4 + 5 + 10)| = 15
// Constraints:
// Matrix size n is between 2 and 100.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int diagonalDifference(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int primaryDiagonal = 0, secondaryDiagonal = 0;

    for (int i = 0; i < n; ++i) {
        primaryDiagonal += matrix[i][i];
        secondaryDiagonal += matrix[i][n - i - 1];
    }

    return abs(primaryDiagonal - secondaryDiagonal);
}

int main() {
    vector<vector<int>> matrix = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };
    
    cout << diagonalDifference(matrix) << endl;
    return 0;
}
