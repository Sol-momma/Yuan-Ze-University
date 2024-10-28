#include <iostream>
using namespace std;

// Fig. 4.7, p. 161

int main()
{
   int counter = 1;
   
   do
   {
      cout << counter << " ";
      ++counter;
   } while ( counter <= 10 );
   
   cout << endl;
}

