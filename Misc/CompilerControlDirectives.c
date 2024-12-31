#include<stdio.h>
#include<stdlib.h>

#define M 50

/*

Compiler control Directives...

1.Conditioning a macro definition

*/

int main(){

    //the compiler control directives can be created in main function


    //positive if condition
    #ifdef M //this directories will check if the macro definition M is defined or not
    //it will affect the compiler hence it is called compiler control... 
        printf("Yes , 'M' is defined...");
    #else
        printf(" 'M' is not defined..."); //compiler identifies this as dummy code according to the condition
    #endif

    
    //negative if condition
    #ifndef M 
        printf("Yes , 'M' is defined...");
    #else
        printf(" 'M' is not defined..."); 
    #endif

    //un-defining a macro definition...

    #ifndef M 
        printf("Yes , 'M' is defined...");
    #else
        printf(" 'M' is not defined..."); 
    #endif

    #undef M  //at this line the macro definition will be undefined

    






}