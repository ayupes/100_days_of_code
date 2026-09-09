//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main(void)
{
    const int N = 5;
    int count = 1;
    while (count <= N)
    {
        for  (int i = 0; i < count; i++)
        {
            printf("*\n");
        }
        printf("\n");
        count += 2;     
    }
    count -= 4;
    while (count >= 1)
    {
        for (int i = 0; i < count; i++)
        {
            printf("*\n");
        }
        printf("\n");
        count -= 2;
    }
}
