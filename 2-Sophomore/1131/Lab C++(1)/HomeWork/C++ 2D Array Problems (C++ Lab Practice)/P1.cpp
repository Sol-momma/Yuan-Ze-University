#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

// 関数: 最大合計を持つ3x3部分行列を探索する
void findMaxSumSubmatrix(const vector<vector<int>>& matrix) {
    int maxSum = INT_MIN; // 最大合計を保持
    int startRow = 0, startCol = 0; // 最大合計部分行列の開始位置

    // 行列のサイズ
    int rows = matrix.size();
    int cols = matrix[0].size();

    // 部分行列を探索
    for (int i = 0; i <= rows - 3; ++i) {
        for (int j = 0; j <= cols - 3; ++j) {
            int currentSum = 0;

            // 3x3部分行列の合計を計算
            for (int x = i; x < i + 3; ++x) {
                for (int y = j; y < j + 3; ++y) {
                    currentSum += matrix[x][y];
                }
            }

            // 最大値を更新
            if (currentSum > maxSum) {
                maxSum = currentSum;
                startRow = i;
                startCol = j;
            }
        }
    }

    // 結果を表示
    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << "\n3x3 Submatrix with Maximum Sum:" << endl;
    for (int i = startRow; i < startRow + 3; ++i) {
        for (int j = startCol; j < startCol + 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nMaximum Sum: " << maxSum << endl;
}

int main() {
    // 6x6行列の入力
    vector<vector<int>> matrix(6, vector<int>(6));

    cout << "Enter a 6x6 matrix:" << endl;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cin >> matrix[i][j];
        }
    }

    // 最大部分行列を探索
    findMaxSumSubmatrix(matrix);

    return 0;
}


// 1 2 3 4 5 6
// 7 8 9 10 11 12
// 13 14 15 16 17 18
// 19 20 21 22 23 24
// 25 26 27 28 29 30
// 31 32 33 34 35 36
