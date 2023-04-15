/*
* C Program to reverse an array using recursion
*/
#include<stdio.h>
void reverse(int num);
int main(void)
{
    int ar1[100],ar2[100],i,n;
    printf("How many number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&ar1[i]);
    }
}
void reverse(int num)
{
    int i,ar1[100],ar2[100];
    for(i=0;i<num;i++)
    {
        ar2[i]=ar1[num-i-1];
    }
     printf("\nReversed Array :\n");
    for(i=0;i<num;i++)
    {
        printf("%d ",ar2[i]);
    }

}


