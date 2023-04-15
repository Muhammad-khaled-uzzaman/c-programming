/*
* C Program to print a matrix diagonally from top to bottom
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int rows, cols, rowCounter, colCounter, currentRow, currentCol;
    int inputMatrix[50][50];
    printf("Enter size of matrix\n");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix of size %dX%d\n", rows, cols);
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }
    printf("Printing matrix diagonally\n");
    for(colCounter = 0; colCounter < cols; colCounter++){
        currentCol = colCounter; currentRow = 0;
        for(;currentCol >= 0 && currentRow < rows; currentCol--, currentRow++){
            printf("%d ", inputMatrix[currentRow][currentCol]);
        }
        printf("\n");
    }

    for(rowCounter = 1; rowCounter < rows; rowCounter++){
        currentCol = cols -1; currentRow = rowCounter;
        for(;currentCol >= 0 && currentRow < rows; currentCol--, currentRow++){
            printf("%d ", inputMatrix[currentRow][currentCol]);
        }
        printf("\n");
    }

    getch();
    return 0;
}

