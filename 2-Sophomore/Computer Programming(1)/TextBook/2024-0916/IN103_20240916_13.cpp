#include <iostream>
#include <iomanip> // header for parameterized stream manipulators
using namespace std;

// Fig. 3.10, p. 121 of the textbook
// sentinel-controlled loop

int main()
{
   int total = 0;
   int gradeCounter = 0;
   int grade;
   double average; // double is a type for floating-point numbers

   cout << "Enter grade or -1 to quit: ";
   cin >> grade;
   
   while ( grade != -1 )
   {
      // total = total + grade;
      total += grade; // means total = total + grade;
      // gradeCounter = gradeCounter + 1;
      ++gradeCounter; // means gradeCounter = gradeCounter + 1
      
      cout << "Enter grade or -1 to quit: ";
      cin >> grade;
   }
   
   if ( gradeCounter != 0 )
   {
      average = static_cast< double >( total ) / gradeCounter;
      cout << setprecision( 3 ) << fixed << average << endl;
      // stream manipulator
      // parameterized stream manipulator
   }
}
