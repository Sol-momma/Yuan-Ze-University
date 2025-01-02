// Matrix Operations
// • Requirements:
// o Input two matrices (2D arrays) of size N x M.
// o Perform the following matrix operations:
// o Addition of the two matrices.
// o Subtraction of the two matrices.
// o Multiplication of the two matrices.
// o Transpose of a matrix.
// // o Display the result of each operation.

#include <iostream>
using namespace std;

const int N = 3; // 行の数
const int M = 3; // 列の数

// 行列を入力する関数
void inputMatrix(int matrix[N][M], string name) {
    cout << "Enter elements of matrix " << name << " (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
}

// 行列を表示する関数
void displayMatrix(int matrix[N][M], string operation) {
    cout << "Matrix " << operation << ":\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// 行列の加算
void addMatrices(int A[N][M], int B[N][M], int result[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// 行列の減算
void subtractMatrices(int A[N][M], int B[N][M], int result[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// 行列の積
void multiplyMatrices(int A[N][M], int B[N][M], int result[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = 0;
            for (int k = 0; k < M; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// 行列の転置
void transposeMatrix(int matrix[N][M], int result[M][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int A[N][M], B[N][M];
    int result[N][M];
    int transpose[M][N];

    // 行列Aと行列Bの入力
    inputMatrix(A, "A");
    inputMatrix(B, "B");

    // 行列の加算
    addMatrices(A, B, result);
    displayMatrix(result, "Addition");

    // 行列の減算
    subtractMatrices(A, B, result);
    displayMatrix(result, "Subtraction");

    // 行列の積
    multiplyMatrices(A, B, result);
    displayMatrix(result, "Multiplication");

    // 行列Aの転置
    transposeMatrix(A, transpose);
    cout << "Transpose of matrix A:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
