// 4.	Write a C++ program to search an element in row-wise and column-wise sorted matrix.

#include<iostream>
using namespace std;

int main(){
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int target;
    cout << "Please enter the element you are looking :" << endl;
    cin >> target;

    int row =0, col = 3;

    while(row < 4 && col >= 0){
        if(matrix[row][col] == target){
            cout << "Location found("<< row << "," << col << ")" << endl;
            return 0;
        }
        (matrix[row][col] > target) ? col -- : row++;
    }
    cout << "Not found" << endl;
    return 0;
}