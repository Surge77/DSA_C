#include<stdio.h>

//INCREMENT & DECREMENT with pointers

//Post increment , pre increment
//Post decrement , pre decrement

int main(){

    int a = 100;
    int *p1 = &a;

    printf("The value of A before: %d\n",(*p1)++); //post increment will first print the value then increment 
    printf("The value of A after post incrementing : %d\n",*p1);
    printf("The value of A after pre increment: %d\n",++(*p1));


    printf("The value of A before: %d\n",(*p1)--); //post decrement will first print the value then decrement
    printf("The value of A after post decrementing : %d\n",*p1);
    printf("The value of A after pre decrement: %d\n",--(*p1));
}