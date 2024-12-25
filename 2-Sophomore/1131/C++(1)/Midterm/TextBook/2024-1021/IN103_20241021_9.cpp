#include <iostream>
using namespace std;

// Dessert is a data type.
// Classes are merely blueprints of objects
// No Dessert objects exist in this program.

class Dessert
{
private: // good practice: setting data to be private within a class
   int weight;
   static int count; // static means not associated with any particular object
public:
   Dessert() // constructor, automatically called when a dessert is created
   {
      weight = 100;
      ++count;
   }
   ~Dessert() { --count; } // destructor
   void eat() { weight -= 20; } // if weight goes wrong, debug WITHIN the class
   int getWeight() { return weight; }
   static int getCount() { return count; }
};

int Dessert::count;

int main()
{
   Dessert d1; // d1 is an object   
   Dessert d2;
   
   d1.eat();
   d1.eat();
   cout << d1.getWeight() << endl; // 60 impossible Dessert::getWeight()
   cout << d2.getWeight() << endl; // 100
   cout << Dessert::getCount() << endl; // 2, unreasonable to do d1.getCount()
}




