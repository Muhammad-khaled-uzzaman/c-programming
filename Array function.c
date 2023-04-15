#include <stdio.h>
#include <conio.h>

/* This function returns an array of N even numbers */
int* getEvenNumbers(int N){
    /* Declaration of a static local integer array */
    static int evenNumberArray[100];
    int i, even = 2;

    for(i=0; i<N; i++){
        evenNumberArray[i] = even;
        even += 2;
    }
    /* Returning base address of evenNumberArray array*/
    return evenNumberArray;
}

int main(){
   int* array, counter;
   array = getEvenNumbers(10);
   printf("Even Numbers\n");
   for(counter=0; counter<10; counter++){
       printf("%d\n", array[counter]);
   }

   getch();
   return 0;
}
