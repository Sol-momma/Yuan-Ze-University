#include <iostream>
using namespace std;

// p. 113 of the textbook, demonstrating while loops

int main()
{
   int product = 3;

   while ( product <= 100 )
      product = 3 * product; // body of the while loop

   cout << product << endl; // 243
}
