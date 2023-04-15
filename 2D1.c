/*find scalar multiplication of a matrix
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int rows, cols, i, j, scalar;
    int inputMatrix[50][50];
    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &rows, &cols);

    printf("Enter Matrix of size %dX%d\n", rows, cols);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("inputMatrix[%d][%d]=",i,j);
            scanf("%d", &inputMatrix[i][j]);
        }
    }
    printf("Enter a number to multiply with matrix \n");
    scanf("%d", &scalar);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            inputMatrix[i][j] = inputMatrix[i][j]*scalar;
        }
    }

    printf("Product Matrix\n");
    for(i= 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", inputMatrix[i][j]);
        }
        printf("\n");
    }
}
