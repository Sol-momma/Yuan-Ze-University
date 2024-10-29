// Declaring and Initializing Pointers

#include <iostream>
using namespace std;

int main() {
    int y = 20;
    int* p = &y;

    cout << "Pointer p points to value: " << *p << endl; // Dereferencing to get the value
    return 0;
}