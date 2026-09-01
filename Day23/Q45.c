//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
int main(void)
{
    printf("Enter n: ");
    int n;
    scanf("%i", &n);

    float sum = 2 / (float) 3;
    int numerator = 2;
    int denominator = 3;
    for (int i = 2; i <= n; i++)
    {
        int difference = denominator - numerator;
        difference += 2;
        numerator += 2;
        denominator = numerator + difference;

        float term = numerator / (float) denominator;
        sum += term;
    }
    printf("%.2f\n", sum);
}
    