#include <iostream>
#include <cmath> // #include <math.h>
#include <iomanip>
// #include <cstdlib> #include <stdlib.h>
using namespace std;

// Fig. 4.6, p. 158

int main()
{
   double amount;
   double principal = 1000.0;
   double rate = .05;
   
   cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;
   cout << fixed << setprecision( 2 );
   
   for ( int year = 1; year <= 10; ++year )
   {
      amount = principal * pow( 1.0 + rate, year );
      cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
   }
}

