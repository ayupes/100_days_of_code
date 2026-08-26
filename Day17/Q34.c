// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a number : ");
    int number;
    scanf("%i", &number);
    int mod;

    for (int i = 2; i < number - 2; i++)
    {
       mod = number % i;
       if (mod == 0)
       {
            break;
       }
    }  
    if (mod == 0 || number == 4)
    {
        printf("Not Prime\n");
    } 
    else if (number == 0)
    {
        printf("Not Prime\n");
    }
    else
    {
        printf("Prime\n");
    }              
    
}
