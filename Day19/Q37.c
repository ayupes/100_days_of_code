//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main(void)
{
    printf("Enter two numbers: ");
    int number1, number2;
    scanf("%i %i", &number1, &number2);
    int big_number;
    if (number1 > number2)
    {
        big_number = number1;
    }
    else 
    {
        big_number = number2;
    }
    int lcm = 1;
    
    for (int i = 1; i <= big_number; i++)
    {
        char save_i = 'n';
        if (number1 % i == 0)
        {
            int quotient = number1 / i;
            number1 = quotient;
            save_i = 'y';
        }
        if (number2 % i == 0)
        {
            int quotient = number2 / i;
            number2 = quotient;
            save_i = 'y';
        }
        if (save_i == 'y')
        {
            lcm = lcm * i;
        }
    }
    printf("%i\n", lcm);
}