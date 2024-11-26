#include <iostream>
#include <cmath>
using namespace std;

// demonstrating Common Programming Error 3.12, p. 124 of the textbook

// x * x + bx + c = 0

int main()
{
   int b, c;
   
   cin >> b >> c;
   
   if ( b * b - 4.0 * c > 0.0 )
   {
      double x = ( -b + sqrt( b * b - 4.0 * c ) ) / 2.0;
   
      if ( x * x + b * x + c != 0.0 )
         cout << "Wrong" << endl;
   }
}


