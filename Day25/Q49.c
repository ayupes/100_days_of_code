//Q49: Write a program to print the following pattern:
//5
//45
//345
//2345
//12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>
int main(void)
{       const int n = 5;
        for (int i = 0; i < n; i++)
        {
            int start = n;
            start -= i;
            // counting 
            while (start <= n)
            {
                printf("%i", start);
                start ++;
            }
            printf("\n");
        }
    
}