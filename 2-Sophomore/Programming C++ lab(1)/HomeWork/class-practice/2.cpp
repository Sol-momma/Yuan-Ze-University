#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p1 = &a;

    cout << "value of a = " << a << endl; // value of a = 10
    cout << "value of p1 = " << p1 << endl; // value of p1 = <address of a>
    cout << "address of a = " << &a << endl; // address of a = <address of a>
    cout << "address of p1 = " << &p1 << endl; // address of p1 = <address of p1>
    cout << "value of the variable pointed by p1 = " << *p1 << endl; // value of the variable pointed by p1 = 10

    return 0;
}