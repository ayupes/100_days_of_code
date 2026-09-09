//Q51: Write a program to print the following pattern:
   // 5
   //45
  //345
 //2345
//12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main(void)
{   
     const int N = 5;
     for (int row = 0; row < N; row++)
     {
        for (int i = 0; i < (N - 1 - row); i++)
        {
            printf(" ");
        }
        for (int j = N - row; j <= N; j++)
        {
            printf("%i", j);
        }
        printf("\n");
     }
}