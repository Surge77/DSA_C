#include<stdio.h>

// Functions returning pointers...
//in pointer as function arguments we learned to receive a pointer now we learn how to return a pointer in function



int *fun(int *); //FUNCTION DECLARATION will return a pointer of int value
int main(){

    int a = 100;
    int *p1; // p1 = &a
    printf("Before fun(), the value of A : %d\n",a);
    p1 = fun(&a); //we need to pass the address of a variable
    printf("After fun(), the value of A : %d\n",*p1);

    
}

int *fun(int *p){ // *p -> &a  //funtion definition 

        *p = 200; // a = 200
        return p; //we are returning the address of p 

}





