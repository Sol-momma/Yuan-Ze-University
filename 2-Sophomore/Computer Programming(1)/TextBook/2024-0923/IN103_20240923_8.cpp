#include <iostream>
using namespace std;

// Modification of Fig. 4.9, pp. 162--164

int main()
{
   char grade; // character type, just like int or double
   int aCount = 0;
   int bCount = 0;
   bool flag = true; // declares a variable of type bool and with flag
   // boolean
   
   while ( flag )
   {
      cin >> grade;
   
      switch ( grade )
      {
         case 'A':
         case 'a':
            ++aCount;
            break;
         case 'B':
         case 'b':
            ++bCount;
            break;
         case 'Q':
         case 'q':
            flag = false;
            break;
         default:
            cout << "Please enter A or B, or Q to quit" << endl;
            break;
      }
   }
   
   cout << "Number of A\'s is " << aCount << endl;
   cout << "Number of B\'s is " << bCount << endl;
}

