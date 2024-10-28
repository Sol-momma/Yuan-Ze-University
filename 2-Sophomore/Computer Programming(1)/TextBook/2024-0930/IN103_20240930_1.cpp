#include <iostream>
using namespace std;

// Modification of Fig. 4.9, pp. 162--164

int main()
{
   cout << "character A = " << int( 'A' ) << endl;

   int grade;
   int aCount = 0;
   int bCount = 0;
   
   while ( ( grade = cin.get() ) != EOF )
   {
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
         case ' ':
         case '\n':
            break;
         default:
            cout << "Please enter A or B, or Q to quit" << endl;
            break;
      }
   }
   
   cout << "Number of A\'s is " << aCount << endl;
   cout << "Number of B\'s is " << bCount << endl;
}

