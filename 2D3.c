/*
* C Program to check If a matrix is Identity matrix or not
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int rows, cols, size, rowCounter, colCounter, flag = 1;
    int inputMatrix[50][50];
    printf("Enter size of a square matrix\n");
    scanf("%d", &size);
    rows = cols = size;
    printf("Enter matrix of size %dX%d\n", rows, cols);
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
                printf("inputMatrix[%d][%d]=",rowCounter,colCounter);
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            if(rowCounter == colCounter){
                if(inputMatrix[rowCounter][colCounter] != 1){
                    flag = 0;
                }
            } else {
                if(inputMatrix[rowCounter][colCounter] != 0){
                    flag = 0;
                }
            }
        }
    }
    if(flag == 0){
        printf("NOT AN IDENTITY MATRIX\n");
    } else {
        printf("IDENTITY MATRIX\n");
    }

    getch();
    return 0;
}
