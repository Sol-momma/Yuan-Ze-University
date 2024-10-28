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
   cout << ( number1 + number2 ) * number1 << endl;
   cout << number1 + number2 * number1 << endl;
   cout << (number1 + number2) * number1 << endl; // also very common style
}

