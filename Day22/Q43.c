//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%i", &number);

    //counting digits
    int copy = number;
    int digits = 0;
    while (copy != 0)
    {
        copy /= 10;
        digits++;
    }
    //calculating sum of factorials
    int copy2 = number;
    int sum = 0;
    for (int i = 0; i < digits; i++)
    {
        int remainder = copy2 % 10;
        int factorial = 1;
        for (int j = remainder; j > 0; j--)
        {   
            factorial = factorial * j;
        }
        sum = sum + factorial;
        copy2 /= 10;
    }
    if (sum == number)
    {
        printf("Strong number\n");
    }
    else 
    {
        printf("Not strong number\n");
    }
}