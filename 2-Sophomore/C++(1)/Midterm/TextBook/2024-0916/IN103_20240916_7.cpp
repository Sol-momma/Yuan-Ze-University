#include <iostream>
using namespace std;

// p. 115 of the textbook

int main()
{
   int total = 0;
   int gradeCounter = 1;
   int grade;
   
   while ( gradeCounter <= 3 )
   {
      cout << "Enter grade: ";
      cin >> grade;
      total = total + grade;
      gradeCounter = gradeCounter + 1;
   }
   
   cout << total / 3.0 << endl; // 3.0 is a floating-point number
}
