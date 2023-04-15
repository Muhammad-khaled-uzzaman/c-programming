#include<stdio.h>
#include<string.h>
int main(void)
{
    char st1[100],st2[100];
    int i=0;
    printf("Enter first string:");
    gets(st1);
    printf("Enter second string:");
    gets(st2);
    if(st1=='\0' && st2=='\0')
    {

    while(st1[i]==st2[i])
    {
        if(st1[i]=='\0'&&st2[i]=='\0')
            i++;
    }
    }
    int d=st1[i] - st2[i];
    if(d==0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
    return 0;
}



