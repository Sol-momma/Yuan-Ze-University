#include <iostream>
using namespace std;

// p. 113 of the textbook, demonstrating while loops

int main()
{
   int product = 3, x = 1;

   while ( product <= 100 )
   {
      product = 3 * product;
      x = x * 2;
   }

   cout << product << endl; // 243
}
