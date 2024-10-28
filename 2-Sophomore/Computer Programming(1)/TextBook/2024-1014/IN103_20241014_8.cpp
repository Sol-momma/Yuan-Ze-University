#include <iostream>
using namespace std;

int square( int y ); // this is called a function prototype

int main()
{
   int x = 8;

   cout << square( x ) << endl; // 81
   cout << x << endl; // 8
}

int square( int y ) // y is local to the function, y is merely a copy of x
{
   y = 9;

   return y * y;
}
