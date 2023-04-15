/*
* C Program to interchange Major and Minor diagonals of a Matrix
*/
#include<stdio.h>
int main(void)
{
    int row,col,i,j,temp,ar[50][50];
    printf("Enter rows and column=");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("ar[%d][%d]=",i,j);
            scanf("%d",&ar[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        j=i;
        temp=ar[i][j];
        ar[i][j]=ar[i][col-j-1];
        ar[i][col-j-1]=temp;
    }
    printf("After swapping matrix diagonals\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;

}
