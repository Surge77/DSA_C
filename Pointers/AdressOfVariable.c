#include<stdio.h>

//getting the value stored in a pointer(address of a variable)

int main(){
    
    int a , *p = &a;

    // p = &a;

    printf("address of A: %d",(int)p); //since we are dealing with address we need to typecast manually

}