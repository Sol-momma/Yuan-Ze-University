#include <iostream>
using namespace std;

// p. 110 of the textbook

int main()
{
   int grade; // declares a variable whose name is grade and whose type is int
   
   cin >> grade;
   
   if ( grade >= 90 )
      cout << "A";
   else if ( grade >= 80 )
      cout << "B";
   else if ( grade >= 70 )
      cout << "C";
   else if ( grade >= 60 )
      cout << "D";
   else
      cout << "F";

   cout << endl;
}
