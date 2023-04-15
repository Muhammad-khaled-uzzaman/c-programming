// symmetric matrix
#include<stdio.h>
int main(void)
{
    int i,j,row,column;
    int a[10][10],Transpose[10][10];
    printf("Enter the number of rows and column:");
    scanf("%d %d",&row,&column);


    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("a=[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }

    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            Transpose[j][i]=a[i][j];

        }
    }
    printf("\nEntered matrix\n");

    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose matrix\n");
    for(i=0; i<column; i++)
    {

        for(j=0; j<row; j++)
        {
            printf("%d ",Transpose[i][j]);
        }
        printf("\n");
    }

        if(a==Transpose)
        {

            printf("Input Matrix is Symmetric Matrix\n");
        }
        else
        {

            printf("Input Matrix is Not a Symmetric Matrix\n");
        }

    return 0;
}
