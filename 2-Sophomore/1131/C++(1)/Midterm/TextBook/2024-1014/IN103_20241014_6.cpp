#include <iostream>
using namespace std;

void findBMI( void )
{
   int height;
   int weight;
   
   cin >> height >> weight;
   cout << weight / ( height / 100.0 ) / ( height / 100.0 ) << endl;
   return;
   cout << "You are not gonna see this line" << endl;
}

int main()
{
   findBMI();
}

