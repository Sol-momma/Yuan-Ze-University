#include <iostream>
using namespace std;

// p. 115 of the textbook

int main()
{
   int total = 0;
   int gradeCounter = 1;
   int grade;
   int average;
   
   while ( gradeCounter <= 3 )
   {
      cout << "Enter grade: ";
      cin >> grade;
      total = total + grade;
      gradeCounter = gradeCounter + 1;
   }
   
   average = total / 3;
   cout << average << endl;
}
