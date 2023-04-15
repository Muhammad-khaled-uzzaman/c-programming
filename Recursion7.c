/*
* C Program to reverse an array using recursion
*/
#include <stdio.h>
#include <conio.h>
void swap(int *array, int leftIndex, int rightIndex);
void reverse(int *array, int leftIndex, int rightIndex);

int main(){
    int inputArray[500], elementCount, counter;

    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);

    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }

    reverse(inputArray, 0, elementCount - 1);
    printf("Reversed Array\n");
    for(counter = 0; counter < elementCount; counter++){
        printf("%d ", inputArray[counter]);
    }

    getch();
    return 0;
}
void swap(int *array, int leftIndex, int rightIndex){
   int temp;
   temp = array[leftIndex];
   array[leftIndex] = array[rightIndex];
   array[rightIndex] = temp;
}
void reverse(int *array, int leftIndex, int rightIndex){
    if(NULL == array){
        printf("Invalid Input");
        return;
    }
    if(leftIndex < rightIndex){
        swap(array, leftIndex, rightIndex);
        reverse(array, leftIndex+1, rightIndex-1);
    }
}
