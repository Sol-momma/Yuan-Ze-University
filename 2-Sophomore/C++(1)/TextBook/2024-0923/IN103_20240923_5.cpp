#include <iostream>
using namespace std;

// Fig. 4.5, p. 157
// sum of all even numbers from 2 to 20, inclusive

int main()
{
   int total = 0;
   
   for ( int i = 2; i <= 20; i += 2 ) // i += 2 means i = i + 2
      total += i;

   cout << "Sum is " << total << endl;
}

