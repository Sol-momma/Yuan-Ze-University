#include <iostream>
using namespace std;

int square( int y ) // parameter, argument
{
   return y * y;
}

int main()
{
   for ( int i = 0; i < 10; ++i )
      cout << square( i ) << ' ' << endl;

   cout << endl;
}

