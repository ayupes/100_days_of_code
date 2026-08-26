// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main(void)
{
    printf("Enter n : ");
    int n;
    scanf("%i", &n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int number = 2 * i + 1;
        sum = sum + number;
    }
    printf("%i\n", sum);
}