#include<stdio.h>

//getting the address of a pointer

int main(){
    
    int a ;// this will be having a separate memory slot 
    int *p = &a; // this also will have a separate memory slot

    // p = &a;

    printf("address of A: %d",(int)p); // Address of variable //since we are dealing with address we need to typecast manually
    printf("\nAddress of *p: %d", (int)&p);// Address of a pointer //since we don't know in what format the computer stores the address so we need to typecast in a specific type

}