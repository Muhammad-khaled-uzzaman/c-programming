/*
* C Program to count frequency of characters in string
*/
#include <stdio.h>
#include <conio.h>

int main(){
    char inputString[100];
    int index, frequency[256] = {0};
    printf("Enter a String\n");
    gets(inputString);
    for(index=0; inputString[index] != '\0'; index++){
        frequency[inputString[index]]++;
    }
    printf("\nCharacter   Frequency\n");
    for(index=0; index < 256; index++){
        if(frequency[index] != 0){
            printf("%c %d\n", index, frequency[index]);
        }
    }

    getch();
    return 0;
}
