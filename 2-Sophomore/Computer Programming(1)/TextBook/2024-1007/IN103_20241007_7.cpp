#include <iostream>
using namespace std;

int main()
{
   int yearOfBirth;

   cout << "Please type your year of birth" << endl;
   cin >> yearOfBirth;

   if ( yearOfBirth < 2000 )
      goto LABEL1;
   else
      goto LABEL2;

   LABEL2:
      cout << "24 years old or younger" << endl;
      return 0;
   LABEL1:
      cout << "25 years old or older" << endl;
      return 0;
}



