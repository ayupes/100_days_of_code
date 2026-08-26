// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main(void)
{
// inputting a number    
    printf("Enter a number : ");
    int number;
    scanf("%i", &number);
// counting the digits
    int count = 0;
    int sacrifice = number;
    do
        {
            count++;
            sacrifice = sacrifice / 10;   // 123
        } 
        while (sacrifice != 0); 
        int digits = count;
// reversing the number
    int reversed = 0;
    for (int i = 0; i < digits; i++)
    {
        int square = 1;
        for (int j = 0; j < digits -1 -i; j++)
        {
            square *= 10;
        }
        int variable = number % 10;
        reversed = reversed + variable * square;
        number /= 10;
    }
    printf("%i\n", reversed);
}
