#include <iostream>
using namespace std;

int main()
{
   int x;
   int years[ 8000 ]; // declare an array with 8000 elements, each being an int
   
   for ( int i = 0; i < 8000; ++i )
      years[ i ] = 2006;

   years[ 8000 ] = 2006; // Ooops!
}

// years[ 0 ]
// years[ 1 ]
// years[ 2 ]
// ...
// years[ 7999 ]

