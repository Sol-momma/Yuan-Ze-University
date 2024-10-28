#include <iostream>
#include <iomanip> // header for parameterized stream manipulators
using namespace std;

// Fig. 3.10, p. 121 of the textbook
// sentinel-controlled loop

int main()
{
   int x = 15;
   int y = 4;
   
   x *= y; // means x = x * y
   cout << x << endl; // 60
   x /= y; // means x = x / y;
   cout << x << endl; // 15
   x %= y; // means x = x % y; x modulo y
   cout << x << endl; // 3
}
