//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%i", &number);

    int copy1 = number;
    int digits = 0;
    while (copy1 != 0)
    {
        digits++;
        copy1 /= 10;
    }

    int product = 1;
    int copy2 = number;
    for (int i = 0; i < digits; i++)
    {
        int odd_digit = copy2 % 10;
        if (odd_digit % 2 != 0)
        {
            product *= odd_digit;
        }
        copy2 /= 10;
    }
    printf("%i\n", product);
}