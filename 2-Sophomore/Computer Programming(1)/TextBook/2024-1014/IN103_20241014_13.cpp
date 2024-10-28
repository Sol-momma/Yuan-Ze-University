#include <iostream>
#include <cstdlib>
#include <cassert>
#include <ctime>
using namespace std;

int main()
{
   int frequency1 = 0;
   int frequency2 = 0;
   int frequency3 = 0;
   int frequency4 = 0;
   int frequency5 = 0;
   int frequency6 = 0;
   int face;

   srand( time( nullptr ) );
   
   for ( int i = 0; i < 10000; ++i )
   {
      face = 1 + rand() % 6; // rand() gives a random number from 0 to RAND_MAX, inclusive
      
      switch ( face )
      {
         case 1:
            ++frequency1;
            break;
         case 2:
            ++frequency2;
            break;
         case 3:
            ++frequency3;
            break;
         case 4:
            ++frequency4;
            break;
         case 5:
            ++frequency5;
            break;
         case 6:
            ++frequency6;
            break;
         default:
            assert( false );
      }
   }

   cout << frequency1 << endl;
   cout << frequency2 << endl;
   cout << frequency3 << endl;
   cout << frequency4 << endl;
   cout << frequency5 << endl;
   cout << frequency6 << endl;
}

