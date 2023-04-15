#include<stdio.h>
#include<string.h>
int main(void)
{
    char st1[100],st2[100];
    int i=0;
    printf("Enter a string:");
    gets(st1);

    while(st1[i]!='\0')
    {
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';
    printf("String =%s",st2);
    return 0;

}
