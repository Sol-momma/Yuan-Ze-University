#include <iostream>
using namespace std;

void findBMI() // void says that no return value is needed
{
   int height;
   int weight;
   
   cin >> height >> weight;
   cout << weight / ( height / 100.0 ) / ( height / 100.0 ) << endl;
}

int main()
{
   findBMI();
}

