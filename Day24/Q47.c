//Q47: Write a program to print the following pattern:
//*
//**
//***
//****
//*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
int main(void)
{   int n;
    printf("input: ");
    scanf("%i", &n);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}