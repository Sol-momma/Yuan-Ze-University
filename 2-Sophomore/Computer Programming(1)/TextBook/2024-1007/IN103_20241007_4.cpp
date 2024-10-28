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
   
   if ( numbers[ index ] <= 4 && index < 5 ) // wrong
   {
      cout << numbers[ index ] << endl;
   }
}



