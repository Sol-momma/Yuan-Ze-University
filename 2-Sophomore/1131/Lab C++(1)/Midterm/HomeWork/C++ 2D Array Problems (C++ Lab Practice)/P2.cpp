#include <iostream>
using namespace std;

// MatrixOperationsクラスの定義
class MatrixOperations {
private:
    int mat[4][4]; // 4x4行列

public:
    // 行列を入力するメソッド
    void setMatrix() {
        cout << "Enter elements of a 4x4 matrix:" << endl;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> mat[i][j];
            }
        }
    }

    // 行を入れ替えるメソッド
    void swapRows(int row1, int row2) {
        for (int i = 0; i < 4; ++i) {
            swap(mat[row1][i], mat[row2][i]); // 2つの行の値をスワップ
        }
    }

    // 列を入れ替えるメソッド
    void swapColumns(int col1, int col2) {
        for (int i = 0; i < 4; ++i) {
            swap(mat[i][col1], mat[i][col2]); // 2つの列の値をスワップ
        }
    }

    // 行列を表示するメソッド
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

// メイン関数
int main() {
    MatrixOperations matrixOps;

    // 行列を入力
    matrixOps.setMatrix();

    // 行と列を入れ替える指示を入力
    int row1, row2, col1, col2;
    cout << "Enter two rows to swap (0-based index): ";
    cin >> row1 >> row2;
    matrixOps.swapRows(row1, row2);

    cout << "Enter two columns to swap (0-based index): ";
    cin >> col1 >> col2;
    matrixOps.swapColumns(col1, col2);

    // 結果を表示
    matrixOps.displayMatrix();

    return 0;
}


// Matrix:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// Swap rows: 0 2
// Swap columns: 1 3
