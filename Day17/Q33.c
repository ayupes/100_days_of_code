// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main()
{
    printf("Enter a number : ");
    int number;
    scanf("%i", &number);
// counting digits
    int sacrifice = number;
    int count = 0;
    do 
    {
        count++;
        sacrifice /= 10;
    }
    while (sacrifice != 0);
    sacrifice = number;
    int digits = count;
// Calculating armstrong value
    int sum = 0;
    for (int i = 0; i < digits; i++)
    {
        int power_variable = 1;
        int variable;
        variable = sacrifice % 10;                              // seperating the last digit
        sacrifice /= 10;                                        // killing a digit (i forgot this everytime)
        // Raising Seperated Digit's power by Number of digits
        for (int j = 0; j < digits; j++)                        
        {
            power_variable *= variable;
        }
        // summing the powered digits
        sum = sum + power_variable;
    }
    if (sum == number)   
    {
        printf("Armstrong\n");
    }
    else 
    {
        printf("Not Armstrong\n");
    }
}