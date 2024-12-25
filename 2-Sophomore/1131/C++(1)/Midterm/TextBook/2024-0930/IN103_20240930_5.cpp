#include <iostream>
using namespace std;

int main()
{
   int n;
   
   cin >> n;
   
   int arr[ n ]; // variable-length array (that we should avoid)
   
   int numbers[ 100 ]; // good, at least not a variable-length array
   const int NUM_HOLIDAYS = 100;
   int counts[ NUM_HOLIDAYS ]; // even better
}


