//: Introduction to Pointers

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // Pointer stores the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;

    return 0;
}
