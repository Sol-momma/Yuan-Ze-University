#include <iostream>
using namespace std;

int main() {
    int* p1 = 0;
    cout << "Size of p1: " << sizeof(p1) << " bytes" << endl; // Size of p1: 8 bytes

    double* p2 = 0;
    cout << "Size of p2: " << sizeof(p2) << " bytes" << endl; // Size of p2: 8 bytes

    return 0;
}