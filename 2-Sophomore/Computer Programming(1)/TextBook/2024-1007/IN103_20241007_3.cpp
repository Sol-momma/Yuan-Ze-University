#include <iostream>
using namespace std;

const int LEN = 5;

int main()
{
   int numbers[ LEN ] = { 1, 2, 3, 4, 5 };
   int index;
   
   cin >> index;
   
   if ( index < 0 )
      index = 0;
   
   if ( index < 5 && numbers[ index ] <= 4 ) // short-circuit evaluation
   {
      cout << numbers[ index ] << endl;
   }
   
   if ( numbers[ 0 ] < 8 || cin >> index ) // short-circuit evaluation
   {
      cout << "Hi" << endl;
   }
}



