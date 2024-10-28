#include <iostream>
using namespace std;

int square( int y ) // parameter, argument
{
   return y * y;
}

int main()
{
   cout << square( 'a' ) << endl; // a character is a one-byte integer
   cout << sizeof( int ) << endl; // how many bytes does an int have
}

