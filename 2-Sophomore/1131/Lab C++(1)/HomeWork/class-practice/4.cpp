//page 10

#include <iostream>

using namespace std;

int main() {
    char myChar = 'A'; // Declaring a character variable
    char *charPtr;     // Declaring a pointer to a character

    charPtr = &myChar; // Assigning the address of myChar to charPtr

    cout << "Value of myChar: " << myChar << endl;
    cout << "Value of charPtr: " << *charPtr << endl; // Dereferencing charPtr to access the value

    return 0;
}