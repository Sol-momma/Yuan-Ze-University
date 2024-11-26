#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Status { CONTINUE, WON, LOST }; // enumeration data type
int rollDice(); // function prototype

int main()
{
   int myPoint;
   Status gameStatus; // just like int x;
   
   srand( time( nullptr ) );
   
   int sumOfDice = rollDice();
   
   switch ( sumOfDice )
   {
      case 7:
      case 11:
         gameStatus = WON;
         break;
      case 2:
      case 3:
      case 12:
         gameStatus = LOST;
         break;
      default:
         gameStatus = CONTINUE;
         myPoint = sumOfDice;
         cout << "Point is " << myPoint << endl;
         break;
   }
   
   while ( gameStatus == CONTINUE )
   {
      sumOfDice = rollDice();
      
      if ( sumOfDice == myPoint )
         gameStatus = WON;
      else if ( sumOfDice == 7 )
         gameStatus = LOST;
   }
   
   if ( gameStatus == WON )
      cout << "Player wins" << endl;
   else
      cout << "Player loses" << endl;
}

int rollDice()
{
   int die1 = 1 + rand() % 6;
   int die2 = 1 + rand() % 6;
   int sum = die1 + die2;
   
   return sum;
}




