#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<int>> mat;

public:
    void setMatrix(int rows, int cols) {
        mat.resize(rows, vector<int>(cols));

        cout << "Enter the elements of the matrix (" << rows << "x" << cols << "):" << endl;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> mat[i][j];
            }
        }
    }

    Matrix transpose() {
        Matrix result;
        int rows = mat.size();
        int cols = mat[0].size();

        // Initialize transposed matrix with swapped dimensions
        result.mat.resize(cols, vector<int>(rows));

        // Calculate transpose
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                result.mat[j][i] = mat[i][j];
            }
        }

        return result;
    }

    void displayMatrix() {
        if(mat.empty()) {
            cout << "Matrix is empty" << endl;
            return;
        }

        int rows = mat.size();
        int cols = mat[0].size();

        cout << "Matrix (" << rows << "x" << cols << "):" << endl;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    int rows, cols;

    // Get matrix dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Input matrix
    m.setMatrix(rows, cols);

    // Display original matrix
    cout << "\nOriginal ";
    m.displayMatrix();

    // Calculate and display transpose
    Matrix transposed = m.transpose();
    cout << "\nTransposed ";
    transposed.displayMatrix();

    return 0;
}
