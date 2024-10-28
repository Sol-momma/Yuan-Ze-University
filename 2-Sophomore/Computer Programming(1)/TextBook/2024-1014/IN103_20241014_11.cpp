#include <iostream>
using namespace std;

double maximum( double x, double y, double z ) // three parameters
{
   double answer = x; // answer is a local variable
   
   if ( y > answer )
      answer = y;

   if ( z > answer )
      answer = z;

   return answer;
}

int main()
{
   cout << maximum( 4.5, 6.3, 9.1 ) << endl; // 9.1
   x = 7; // does not compile
   answer = 6; // does not compile
}

