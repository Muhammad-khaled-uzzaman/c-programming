#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    int i=0,vowel=0,digit=0,consonant=0;
    printf("Enter a string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }
        else if(((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')) && !isVowel(str[i]))
        {
            consonant++;
        }
        i++;
    }
    printf("Vowel =%d\n",vowel);
    printf("Digit =%d\n",digit);
    printf("Consonant =%d\n",consonant);

}
