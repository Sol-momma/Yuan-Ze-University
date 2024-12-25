// Dereferencing Pointers

#include <iostream>
using namespace std;

int main() {
    int z = 15;
    int* ptr = &z;

    cout << "Value of z via pointer: " << *ptr << endl;
    return 0;
}