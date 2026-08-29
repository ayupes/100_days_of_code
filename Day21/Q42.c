//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%i", &number);
    int sum_of_factors = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum_of_factors += i;
        }
    }
    if (sum_of_factors == number)
    {
        printf("Perfect number\n");
    }
    else 
    {
        printf("Not perfect number\n");
    }
}