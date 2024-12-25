#include <iostream>
using namespace std;

int main()
{
   int x, y;
   
   cin >> x >> y;

   if ( x == 3 && y < 8 )
   {
      cout << "Hi" << endl;
   }
   
   if ( ( x == 3 ) && ( y < 8 ) ) // logical AND
   {
      cout << "Hi" << endl;
   }
   
   if ( ( x == 3 ) || ( y < 8 ) ) // logical OR
   {
      cout << "Howdy" << endl;
   }
   
   if ( !( y < 8 ) ) // logical negation
   {
      cout << "Yo" << endl;
   }
   
   if ( x ) // nonzero valus are treated as being true and zero false
   {
      cout << "x is not zero" << endl;
   }
   
   int z;
   
   while ( cin >> z )
   {
      cout << "You typed " << z << endl;
   }
}



