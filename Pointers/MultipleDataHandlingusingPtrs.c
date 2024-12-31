#include<stdio.h>

//MULTIPLE Data handling using pointers
//here we will change the data stored in variable using pointers

int main(){
    
    int a = 100, b = 200, c = 300 ;// this will be having a separate memory slot 

    int *p = &a; // this also will have a separate memory slot

    // p = &a;

    printf("address of A: %d\n",(int)p); // Address of variable //since we are dealing with address we need to typecast manually

    printf("Before value of A using *p: %d\n", *p); //this will print the value of variable A using pointer
    
    *p = 200; //Here we changed the value of variable using pointers

    printf("After value of A using *p: %d\n", *p); 
    printf(" \n");

    p = &b;

    printf("address of B: %d\n",(int)p); 

    printf("value of B using *p: %d\n", *p);
    printf(" \n");

    p = &c;

    printf("address of c: %d\n",(int)p); 

    printf("value of C using *p: %d\n", *p);
}