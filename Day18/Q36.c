// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main(void)
{
    printf("Enter the two numbers: ");
    int number1, number2;
    scanf("%i %i", &number1, &number2);
    int smaller_number;

    if (number1 < number2)
    {
        smaller_number = number1;
    }
    else
    {
        smaller_number = number2;
    }
    int hcf;
    for (int i = 1; i <= smaller_number; i++)
    {
        int reminder1 = number1 % i;
        int reminder2 = number2 % i;
        if (reminder1 == 0 && reminder2 == 0)
        {
            hcf = i;
        }
    }
    printf("%i\n", hcf);







}