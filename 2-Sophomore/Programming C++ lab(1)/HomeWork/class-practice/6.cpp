//p-12

#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {10, 20, 30};
    int* ptr = arr;
    
    // Output the first element of the array using array notation and pointer dereferencing
    cout << arr[0] << "\n"; // Outputs 10
    cout << *(ptr + 0) << "\n"; // Outputs 10

    return 0;
}