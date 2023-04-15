/*
* C Program to compare two matrices
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int rows1, cols1, rows2, cols2, rowCounter, colCounter, isEqual = 1;
    int firstMatrix[50][50], secondMatrix[50][50];
    printf("Enter size of first matrix\n");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter first matrix of size %dX%d\n", rows1, cols1);
    for(rowCounter = 0; rowCounter < rows1; rowCounter++)
    {
        for(colCounter = 0; colCounter < cols1; colCounter++)
        {
            printf("firstMatrix[%d][%d]=",rowCounter,colCounter);
            scanf("%d", &firstMatrix[rowCounter][colCounter]);
        }
    }

    printf("Enter size of second matrix\n");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter second matrix of size %dX%d\n", rows2, cols2);
    for(rowCounter = 0; rowCounter < rows2; rowCounter++)
    {
        for(colCounter = 0; colCounter < cols2; colCounter++)
        {
            printf("firstMatrix[%d][%d]=",rowCounter,colCounter);
            scanf("%d", &secondMatrix[rowCounter][colCounter]);
        }
    }

    if((rows1 != rows2)  || (cols1 != cols2))
    {
        printf("UNEQUAL MATRICES: Size of both matrices not same\n");
    }
    else
    {
        for(rowCounter=0; rowCounter<rows1 && isEqual==1; rowCounter++)
        {
            for(colCounter = 0; colCounter < cols1; colCounter++)
            {
                if(firstMatrix[rowCounter][colCounter] !=
                        secondMatrix[rowCounter][colCounter])
                {
                    printf("UNEQUAL MATRICES: Element mismatch\n");
                    isEqual = 0;
                    break;
                }
            }
        }
        if(isEqual == 1)
        {
            printf("EQUAL MATRICES\n");
        }
    }
    getch();
}

