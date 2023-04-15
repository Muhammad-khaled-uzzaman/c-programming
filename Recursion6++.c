/*
* C Program to reverse the digits of a number using recursion
*/
#include <stdio.h>
int getReversedNumber(int number);
int main(){
    int number, reverse = 0;
    printf("Enter a number\n");
    scanf("%d", &number);

    reverse = getReversedNumber(number);

    printf("Reversed number : %d\n", reverse);
    return 0;
}
int getReversedNumber(int number)
{
    int rem,temp,reverse=0;
    if(number==0)
    {
        return 0;
    }
    temp=number;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;

    }
    return reverse;
}
