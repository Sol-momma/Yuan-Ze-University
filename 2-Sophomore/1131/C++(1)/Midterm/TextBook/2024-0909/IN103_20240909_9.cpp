#include <iostream>
using namespace std;

// THIS IS A COMMENT AND IS OMITTED BY THE COMPILER

// strongly typed language

int main()
{
   int number1; // declaring a variable, number1, with type int (integer)
   int number2; // the second number
   int x; // not recommend because it is hard to understand what x means
   
   cin >> number1 >> number2;
   x = number1 + number2; // = means assignment
   cout << "sum is " << x << endl;
}

