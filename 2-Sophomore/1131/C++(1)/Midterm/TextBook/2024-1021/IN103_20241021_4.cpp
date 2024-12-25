#include <iostream>
using namespace std;

void useLocal(); // function prototype
void useStaticLocal();
void useGlobal();

int x = 1; // global variable

int main()
{
   int x = 5; // local variable to main
   
   cout << x << endl; // 5
   
   {
      int x = 7;
      
      cout << x << endl; // 7
   }
   
   cout << x << endl; // 5
   
   useLocal(); // 25 26
   useStaticLocal(); // 50 51
   useGlobal(); // 1 10
   useLocal(); // 25 26
   useStaticLocal(); // 51 52
   useGlobal(); // 10 100
   
   cout << x << endl; // 5
}

void useLocal()
{
   int x = 25; // local variable to useLocal
   
   cout << x << endl; // 25
   ++x;
   cout << x << endl; // 26
}

void useStaticLocal()
{
   static int x = 50; // initialized the first time useStaticLocal is called
   
   cout << x << endl;
   ++x;
   cout << x << endl;
}

void useGlobal()
{
   cout << x << endl;
   x *= 10;
   cout << x << endl;
}

// useGlobal uses the global variable x.


