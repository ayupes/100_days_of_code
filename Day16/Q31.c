// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main(void)
{
    printf("Type a Number : ");
    long number;
    scanf("%li", &number);

    int total_bits = 64;
    char starter = 'n';

    printf("Binary form : ");

    for(int i = total_bits - 1; i >= 0; i--)
    {
        long bit = (number >> i) & 1;
       
        
       
        if (bit == 1)
        {
            starter = 'y';
            printf("%li", bit);
        }
        else if (starter == 'y')
        {
            printf("%li", bit);
        }    
    }
    printf("\n");
}