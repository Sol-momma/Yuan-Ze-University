#include <iostream>
#include <iomanip> // header for parameterized stream manipulators
using namespace std;

// Fig. 3.15, p. 132 of the textbook

int main()
{
   int c = 5;
   
   cout << c << endl; // 5
   cout << c++ << endl; // 5, postincrementing c
   cout << c << endl; // 6
   cout << ++c << endl; // 7, preincrementing c, c = c + 1
   cout << c << endl; // 7
}
