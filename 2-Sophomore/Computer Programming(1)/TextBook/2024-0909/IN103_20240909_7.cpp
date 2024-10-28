#include <iostream>
using namespace std;

// THIS IS A COMMENT AND IS OMITTED BY THE COMPILER

// strongly typed language

int main()
{
   // int number1; // declaring a variable, number1, with type int (integer)
   // int number2; // the second number
   // int sum; // the summation of the two numbers
   
   int number1, number2, sum; // declaring three variables all of type int
   
   cin >> number1 >> number2;
   sum = number1 + number2; // = means assignment
   cout << "sum is " << sum << endl;
}

