#include <iostream>
#include <vector>
using namespace std;

// 魔法陣を確認する関数
bool isMagicSquare(const vector<vector<int>>& matrix) {
    int n = matrix.size(); // 行列のサイズ
    int sum = 0;

    // 最初の行の合計を計算
    for (int j = 0; j < n; ++j) {
        sum += matrix[0][j];
    }

    // 各行と各列の合計をチェック
    for (int i = 0; i < n; ++i) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != sum || colSum != sum) {
            return false;
        }
    }

    // 対角線の合計をチェック
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; ++i) {
        diag1 += matrix[i][i];
        diag2 += matrix[i][n - i - 1];
    }

    return (diag1 == sum && diag2 == sum);
}

// メイン関数
int main() {
    vector<vector<int>> matrix(3, vector<int>(3)); // 3x3行列

    // 行列を入力
    cout << "Enter a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    // 行列を表示
    cout << "Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // 魔法陣の確認結果を表示
    if (isMagicSquare(matrix)) {
        cout << "The matrix is a Magic Square." << endl;
    } else {
        cout << "The matrix is NOT a Magic Square." << endl;
    }

    return 0;
}

// Matrix:
// 2 7 6
// 9 5 1
// 4 3 8

