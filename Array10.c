#include<stdio.h>
int main(void)
{
    int ar[100],n,i,j,x,count=0;
    printf("How many number:");
    scanf("%d",&n);
    for(x=0; x<n; x++)
    {
        scanf("\n%d",&ar[x]);
    }
    for(x=0; x<n; x++)
    {
        printf("%d ",ar[x]);
    }
    printf("\n");
    for(x=0; x<n ;x++)
    {
        if(ar[x]<0)
        {
            printf("%d ",ar[x]);
        }
    }

    return 0;
}
