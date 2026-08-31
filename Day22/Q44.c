//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3             (very sorry , but this is incorrect , it should be 2.6)

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main(void)
{
    printf("Enter n: ");
    int n;
    scanf("%i", &n);
    float sum = 1;
    
    for (int i = 2; i < n + 1; i++)
    {
        float term = (2 * i - 1) / (float) (2 * i);
        sum = sum + term;
    }
    printf("Approximate sum: %.1f\n", sum);
}