#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[30]="madam";
    char str2[30];
    int i=0,j,len=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    j=0;
    i=len-1;
    while(j<i)
    {
        if(str2[j]!=str1[i])
        {
            printf("string is not palindrome");
        }
        j++;
        i--;
    }
    printf("String is palindrome");
    return 0;
}
