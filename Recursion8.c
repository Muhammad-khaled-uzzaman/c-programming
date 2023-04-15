/*
* C Program to reverse a string using recursion
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

char* reverseString(char *string, int leftIndex, int rightIndex);

int main()
{
   char inputArray[100];

   printf("Enter a string to reverse\n");
   gets(inputArray);

   reverseString(inputArray, 0, strlen(inputArray) - 1);
   printf("Reversed string\n%s", inputArray);
   getch();
   return 0;
}
char* reverseString(char *string, int leftIndex, int rightIndex){
      char ch;
      if(NULL == string || leftIndex > rightIndex)
          return NULL;
      ch = string[leftIndex];
      string[leftIndex] = string[rightIndex];
      string[rightIndex] = ch;

      reverseString(string, leftIndex + 1, rightIndex - 1);
      return string;
}

