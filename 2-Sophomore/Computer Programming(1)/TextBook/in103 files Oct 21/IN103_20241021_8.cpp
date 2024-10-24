#include <iostream>
using namespace std;

// Dessert is a data type.
// Classes are merely blueprints of objects
// No Dessert objects exist in this program.

class Dessert
{
private: // good practice: setting data to be private within a class
   int weight;
   static int count;
public:
   Dessert() { weight = 100; } // constructor, automatically called upon
                               // creation of a dessert
   void eat() { weight -= 20; } // if weight goes wrong, debug WITHIN the class
   int getWeight() { return weight; }
};

int Dessert::count;

int main()
{
   Dessert d1; // d is an object   
   Dessert d2;
   
   d1.eat();
   d1.eat();
   cout << d1.getWeight() << endl; // 60
}




