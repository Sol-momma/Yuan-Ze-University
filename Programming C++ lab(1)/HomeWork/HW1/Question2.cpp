// Sorting an Array of Integers:
// • Requirements:
// o Define an array of 10 integers.
// o Use a for-loop to take input from the user.
// o Implement the Bubble Sort algorithm to sort the array.
// o Display the sorted array after sorting.

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    // ユーザーから配列の入力を受け取る
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // バブルソートの実装
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 2つの要素を交換
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // ソート後の配列を表示
    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

