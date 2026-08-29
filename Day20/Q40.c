//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a binary number: ");
    int number;
    scanf("%i", &number);
    // counting digits
    int copy = number;
    int digits = 0;
    while (copy != 0)
    {
        digits++;
        copy /= 10;
    }
    int copy1 = number;

    for (int i = 0; i < digits; i++)
    {
        int power_of_10 = 1;
        for (int j = 1 + i; j < digits; j++)
        {
            power_of_10 *= 10;
        }
        if (copy1 / power_of_10 == 0)
        {
            printf("%i", 1);
        }
        else
        {
            copy1 = copy1 - (copy1 / power_of_10 * power_of_10);
            printf("%i", 0);
        }
    }
     printf("\n");
}
