// Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a number : ");
    int number;
    scanf("%i", &number);

    for (int factor = 1; factor <= number; factor++)
    {
        int reminder = number % factor;
        if (reminder == 0)
        {
            printf("%i ", factor);
        }
    }
    printf("\n");



}