#include <stdio.h>
#include <conio.h>

int main() {
    int num;
    printf("Enter an Integer\n");
    scanf("%d", &num);

    switch(num%2) {
        case 0: printf("%d is Even", num);
                break;
        case 1: printf("%d is Odd", num);
                break;
    }

    getch();
    return 0;
}

