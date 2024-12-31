#include<stdio.h>

//INCREMENT & DECREMENT with pointers

//Post increment , pre increment
//Post decrement , pre decrement

//This time we are going to increment or decrement the address of variable

int main(){

    int a = 100;
    int *p1 = &a;

    //dealing with the value
    printf("The value of A before: %d\n",(*p1)++); //post increment will first print the value then increment 
    printf("The value of A after post incrementing : %d\n",*p1);
    printf("The value of A after pre increment: %d\n",++(*p1));
    printf("\n");


    printf("The value of A before: %d\n",(*p1)--); //post decrement will first print the value then decrement
    printf("The value of A after post decrementing : %d\n",*p1);
    printf("The value of A after pre decrement: %d\n",--(*p1));
    printf("\n");

    
    //dealing with the address
    //we just have to remove the star and it will deal with the address
    printf("The ADDRESS of A before: %d\n",(int)p1++); //post increment will first print the value then increment 
    printf("The ADDRESS of A after post incrementing : %d\n",(int)p1);
    printf("The ADDRESS of A after pre increment: %d\n",(int)++p1);
    printf("\n");


    printf("The ADDRESS of A before: %d\n",(p1)--); //post decrement will first print the value then decrement
    printf("The ADDRESS of A after post decrementing : %d\n",(int)p1);
    printf("The ADDRESS of A after pre decrement: %d\n",(int)--p1);
}