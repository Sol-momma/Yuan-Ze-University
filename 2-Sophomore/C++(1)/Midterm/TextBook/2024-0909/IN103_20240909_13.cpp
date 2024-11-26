#include <iostream>
using namespace std;

// THIS IS A COMMENT AND IS OMITTED BY THE COMPILER

// strongly typed language

int main()
{
   int number1; // declaring a variable, number1, with type int (integer)
   int number2; // the second number

   cin >> number1;
   cin >> number2;

   if ( number1 == number2 )
      cout << "Equal" << endl;

   if ( number1 != number2 )
      cout << "Not equal" << endl;

   if ( number1 > number2 )
      cout << "Greater than" << endl;

   if ( number1 <= number2 )
      cout << "Less than or equal to" << endl;
}

