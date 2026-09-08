//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main(void)
{
    printf("Enter units consumed : ");
    int units;
    scanf("%i", &units);
    int bill;

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        units -= 100;
        bill = 500 + units * 7;
    }
    else if (units <= 300)
    {
        units -= 200;
        bill = 1200 + units * 10;
    }
    else
    {
        units -= 300;
        bill = 2200 + units * 12;
    }
    printf("₹%i\n", bill);
}