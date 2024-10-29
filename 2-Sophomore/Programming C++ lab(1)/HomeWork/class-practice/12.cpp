// Pointers as Function Parameters

#include <iostream>
using namespace std;

void increment(int* p) {
    (*p)++; // Dereference and increment the value
}

int main() {
    int val = 5;
    increment(&val); // Pass the address of val
    cout << "Value after increment: " << val << endl; // Outputs 6
    return 0;
}