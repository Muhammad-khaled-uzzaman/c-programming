#include<stdio.h>
int main(void)
{
    int num,row,colum;
    printf("Enter number=");
    scanf("%d",&num);

    for(row=num; row>=1; row--)
    {
        for(colum=1; colum<=num-row; colum++)
        {
            printf("  ");
        }
        for(colum=1; colum<=2*row-1; colum++)
        {
            printf("%d ",colum);
        }
        printf("\n");
    }
    printf("\n\n");

    for(row=num-1; row>=1; row--)
    {
        for(colum=1; colum<=num-row; colum++)
        {
            printf("  ");
        }
        for(colum=1; colum<=2*row-1; colum++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(row=1;row<=num-1;row++)
    {
        for(colum=1;colum<=num-row;colum++)
        {
            printf("  ");
        }
        for(colum=1;colum<=2*row-1;colum++)
        {
            printf("* ");
        }
        printf("\n");
    }




}

