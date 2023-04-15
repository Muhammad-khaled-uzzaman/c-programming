#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    int i=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
        else
        {
            str[i]=str[i];
        }
    }
    str[i]='\0';
    printf("String all uppercase character =%s",str);
}
