#include<stdio.h>

//getting the value of variable using pointer

int main(){
    
    int a = 100; ;// this will be having a separate memory slot 
    int *p = &a; // this also will have a separate memory slot

    // p = &a;

    printf("address of A: %d",(int)p); // Address of variable //since we are dealing with address we need to typecast manually
    
    printf("\nAddress of *p: %d\n", (int)&p);// Address of a pointer //since we don't know in what format the computer stores the address so we need to typecast in a specific type

    printf("Value of A using A: %d\n", a); //printing the variable value

    printf("value of A using *p: %d", *p); //this will print the value of variable A using pointer
}