//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%i", &number);

    int copy1_number = number;
    int copy2_number = number;
    int digits = 0;
    // counting digits
    while (copy1_number != 0)
    {
        digits++;
        copy1_number /= 10;
    }
    // adding digits
    int sum = 0;
    for (int i = 0; i < digits; i++)
    {
        int digit = copy2_number % 10;
        copy2_number /= 10;
        sum += digit;
    }
    printf("%i\n", sum);
}