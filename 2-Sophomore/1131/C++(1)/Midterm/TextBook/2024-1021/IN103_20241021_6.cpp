#include <iostream>
using namespace std;

// Dessert is a data type.
// Classes are merely blueprints of objects
// No Dessert objects exist in this program.

class Dessert
{
public: // bad
   int weight;
};

int main()
{
   Dessert d; // d is an object
   
   d.weight = -9; // unreasonable
}




