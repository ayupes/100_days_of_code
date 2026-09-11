//Q54: Write a program to print the following pattern:

   //*
  //***
 //*****
//*******
 //*****
  //***
   //*


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main(void)
{
   const int highest_star_term = 7;
   for (int row = 0; row < (highest_star_term / 2 + 1); row++)
   {
        for (int i = 0; i < (highest_star_term / 2 - row); i++)
        {
            printf(" ");
        }
        for (int i = 0; i < (2 * row + 1); i++)
        {
            printf("*");
        }
        printf("\n");
   }
   for (int row = 0; row < highest_star_term / 2; row++)
   {
        for (int i = 0; i < (row + 1); i++)
        {
            printf(" ");
        }
        for (int i = 0; i < ((highest_star_term - 2) - 2 * row); i++)
        {
            printf("*");
        }
        printf("\n");
   }

   
    
}
