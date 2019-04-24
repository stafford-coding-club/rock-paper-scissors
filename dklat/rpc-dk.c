#include <stdio.h>
#include <stdlib.h>

int main(void) {

   printf("----- ENTER 4 TO EXIT THE PROGRAM -----\n");
   int userWins = 0, compWins = 0, totalGames = 0;

   // infinite loop. runs until user says to stop.
   while(1) {

      printf("Rock, paper, or scissors? (1,2,3) : ");
      
      int uInput;
      scanf("%d", &uInput);

      if (uInput == 4) break;
      if (uInput >  3) uInput = 3;
      if (uInput <  1) uInput = 1;

      int cpu = rand() % 3 + 1;

      // big ol' block of code
      if (uInput == cpu) {
         printf("DRAW!\n");
      } else if (uInput == 1 && cpu == 2) {
         printf("Computer won!\n");
         compWins += 1;
      }  else if (uInput == 1 && cpu == 3) {
         printf("You won!\n");
         userWins += 1;
      } else if (uInput == 2 && cpu == 1) {
         printf("You won!\n");
         userWins += 1;
      } else if (uInput == 2 && cpu == 3) {
         printf("Computer won!\n");
         compWins += 1;
      } else if (uInput == 3 && cpu == 1) {
         printf("Compuer won!\n");
         compWins += 1;
      } else if (uInput == 3 && cpu == 2) {
         printf("You won!\n");
         userWins += 1;
      }

      totalGames += 1;
   }

   printf("Total Games: %d\nUser wins: %d\nCPU wins: %d\n",totalGames,userWins,compWins);
   const float winRate = ((float)userWins / totalGames);

   printf("Win rate: %0.2f\n",winRate);

   return 0;
}