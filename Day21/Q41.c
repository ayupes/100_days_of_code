//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%i", &number);
    // counting digits
    int digits = 0;
    int copy = number;
    while (copy != 0)
    {
        digits++;
        copy /= 10;
    }
    //calculating power of 10
    int power_of_10 = 1;
    for (int i = 0; i < digits - 1; i++)
    {
        power_of_10 *= 10;
    }
    //seperating first digit
    int copy2 = number;
    int first_digit = copy2 / power_of_10;
    //seperating last digit
    int last_digit = copy2 % 10;
    //interchanging places
    int half_switched = (copy2 - last_digit) + first_digit;
    int interchanged = (half_switched - first_digit * power_of_10) + last_digit * power_of_10;
    //printing interchanged number
    printf("%i\n", interchanged);







}