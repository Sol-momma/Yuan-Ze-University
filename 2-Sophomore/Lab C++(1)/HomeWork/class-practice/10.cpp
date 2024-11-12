// Pointer Arithmetic

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* ptr = arr; // Points to first element of arr

    cout << "First element: " << *ptr << endl;
    cout << "Second element: " << *(ptr + 1) << endl; // Pointer arithmetic
    return 0;
}