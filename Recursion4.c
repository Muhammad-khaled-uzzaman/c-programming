/*
* C Program to find power of a number (a^b) using recursion
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int base, exponent, counter, result = 1;
    printf("Enter base and exponent \n");
    scanf("%d %d", &base, &exponent);

    result = getPower(base, exponent);

    printf("%d^%d = %d", base, exponent, result);
    getch();
    return 0;
}
int getPower(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    return base * getPower(base, exponent - 1);
}
