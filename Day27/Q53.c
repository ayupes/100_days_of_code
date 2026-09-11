//Q53: Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main(void)
{
    const int N = 9;
    for (int star = 1; star <= N; star += 2)
    {
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int star = N - 2; star >= 1; star -= 2)
    {
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
    }

}