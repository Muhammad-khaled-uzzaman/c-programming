/*
* C Program to calculate length of a string using loop
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,len;
    char st[100];
    printf("Enter a string:");
    gets(st);
    i=0;
    len=0;
    while(st[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length =%d",len);
    return 0;
}
