#include <iostream>
using namespace std;

// Dessert is a data type.
// Classes are merely blueprints of objects
// No Dessert objects exist in this program.

class Dessert
{
private: // good practice: setting data to be private within a class
   int weight;
public:
   void eat() { weight -= 20; } // if weight goes wrong, debug WITHIN the class
};

int main()
{
   Dessert d; // d is an object   
}




