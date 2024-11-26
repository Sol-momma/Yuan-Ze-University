#include <iostream>
#include <iomanip> // header for parameterized stream manipulators
using namespace std;

int main()
{
   int x = 5;

   cout << setprecision( 3 ) << fixed << x << endl; // 5, not 5.000
}
