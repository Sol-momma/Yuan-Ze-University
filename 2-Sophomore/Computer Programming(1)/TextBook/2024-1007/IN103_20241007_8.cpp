#include <iostream>
using namespace std;

const int LEN = 3;

// introducing functions
// name: maximum
// Parameters may be thought of as the inputs to the function.
// They are also called arguments.
// The function will give you an answer, which is the maximum among a, b
// and c.
// Such an answer is "returned" by the function.
// The answer is formally called the return value.
// It has a type, which is int.
// The return type precedes the function name.

int maximum( int a, int b, int c )
{
   int answer = a;
   
   if ( b > answer )
      answer = b;

   if ( c > answer )
      answer = c;

   return answer;
}

int main()
{
   int yearsOfBirth[ LEN ];
   int yearsOfAdmission[ LEN ];
   
   for ( int i = 0; i < LEN; ++i )
      cin >> yearsOfBirth[ i ] >> yearsOfAdmission[ i ];

   cout << maximum( yearsOfBirth[ 0 ], yearsOfBirth[ 1 ], yearsOfBirth[ 2 ] )
      << endl;
   cout << maximum( yearsOfAdmission[ 0 ], yearsOfAdmission[ 1 ],
      yearsOfAdmission[ 2 ] ) << endl;
   cout << maximum( 8, 9, 3 ) << endl; // 9, calls the maximum function
   cout << maximum( 7, 4, 3 ) << endl; // 7
}



