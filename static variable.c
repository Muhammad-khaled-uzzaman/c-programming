#include <stdio.h>

int printVal(){
    /* Declaring a static variable */
    static int staticVariable = 0;
    /* Declaring a local variable */
    int localVariable = 0;

    /*Incrementing both variables */
    staticVariable++;
    localVariable++;

    printf("StaticVariable = %d, LocalVariable = %d\n", staticVariable, localVariable);
}

int main(){
   printVal();
   printVal();
   printVal();
   printVal();

   return 0;
}
