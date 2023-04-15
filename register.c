#include <stdio.h>

int main()
{
    /* Declaration of register variables using register keyword */
    register int counter;
    int sum=0;
    /* Variable counter is used frequently within for loop */
    for(counter = 1; counter <= 500; counter++)
    {
        sum+= counter;
    }
    printf("Sum = %d", sum);

    return 0;
}
