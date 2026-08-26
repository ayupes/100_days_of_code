// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(void)
{
// Inputting the number
    printf("Enter a number : ");
    int input;                     // defining "number" (local in main fx)
    scanf("%i", &input);
    int number = input;  
    int backup = input;          // copy of input
// Counting digits
    int count = 0;
    int result;
    do
    {
        count++;
        result = input /= 10;
    }
    while (result != 0);
    int digits = count;
// Reversing Number
    int reversed = 0;
    for (int i = 0; i < digits; i++)
    {
        int square = 1;
        for (int j = 0; j < (digits - 1 - i); j++)
        {
            square *= 10;
        }
        int variable = number % 10;  // 4x 3x 2x 1x
        reversed = reversed + square * variable;
        number /= 10;
    }
// Printing Palindrome
    if (reversed == backup)
    {
        printf("Palindrome\n");
    }
        else
    {
        printf("Not palindrome\n");
    }
}


