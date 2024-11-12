#include <iostream>
using namespace std;

// THIS IS A COMMENT AND IS OMITTED BY THE COMPILER

// strongly typed language

int main()
{
   int number1; // declaring a variable, number1, with type int (integer)
   int number2; // the second number
   int sum; // the summation of the two numbers
   // int Sum; // different from sum because C++ is case sensitive
   int sumOfTwoNumbers; // lower camel case
   int SumOfTwoNumbers; // upper camel case, usually for classes rather than variables
   int sum_of_two_numbers; // snake case
   
   cin >> number1 >> number2;
   sumOfTwoNumbers = number1 + number2; // = means assignment
   cout << "sum is " << sumOfTwoNumbers << endl;
}

