// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main(void)
{
// inputting a number 
    printf("Enter a number : ");
    int number;
    scanf("%i", &number);
// calculating factorial 
    long factorial = 1;  
    for (int i = number; i > 0; i--)
    {
        factorial = factorial * i;
    }
    printf("Factorial : %li\n", factorial);
}    

                                                