#include <iostream>
using namespace std;

// p. 110 of the textbook

int main()
{
   int x, y;
   
   cin >> x >> y;
   
   if ( x > 5 )
      if ( y > 5 )
         cout << "x and y are > 5" << endl;
   else
      cout << "x is <= 5" << endl;
}
