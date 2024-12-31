#include<stdio.h>

// POINTERS AS FUNCTION ARGUMENTS..
//this process is called pass by address/reference


void fun(int *); //FUNCTION DECLARATION
int main(){

    int a = 100;
    printf("Before fun(), the value of A : %d\n",a);
    fun(&a); //we need to pass the address of a variable
    printf("After fun(), the value of A : %d\n",a);

    
}

void fun(int *p){ // *p -> &a  //funtion definition 

        *p = 200; // a = 200

}





