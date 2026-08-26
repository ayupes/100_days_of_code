// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main(void)
{
    printf("Enter n : ");
    int n;
    scanf("%i", &n);
    int product = 1;

    for (int i = 1; i <= n / 2; i++)
    {
        int number = 2 * i;
        product *= number;
    }
    printf("%i\n", product);
    
}