#include <iostream>
using namespace std;

// THIS IS A COMMENT AND IS OMITTED BY THE COMPILER

// strongly typed language

int main()
{
   int number1; // declaring a variable, number1, with type int (integer)
   int number2; // the second number
   int sum; // not recommend because it is hard to understand what x means

   cout << "Enter the first number: "; // good in the real world
   cin >> number1;
   cout << "Enter the second number: ";
   cin >> number2;
   sum = number1 + number2; // = means assignment
   cout << "sum is " << sum << endl;
}

