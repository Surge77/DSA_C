//What is a pointer to a pointer?

// A pointer pointing to another pointer is called as "Pointer to pointer"

//Declaring a pointer to a pointer

//Syntax:

// datatype **pointer_name

#include<stdio.h>

// Pointer to pointer (Chain of pointer).....


int main(){

    int a = 100; // we are not touching this variable , with pointers alone we are getting the value and address of the variable
    int *p1 = &a;
    int **p2 = &p1; // (p2 -> p1 -> a) chain of pointers 
    //with **p2 pointer we can access the p1 as well as A

    printf("the value of A using *p1 : %d\n",*p1);

    printf("the address of A using **p2 : %d\n",(int)*p2); //since an address can be in any form whether decimal,hexadecimal..we need to typecast

    printf("the value of A using **p2 : %d\n",**p2);

    //another explanation of pointer to pointer

    int a = 5;
    int *pa;
    int **ppa;
    pa = &a;
    ppa = &pa;
    printf("Address of a = %p\n",&a);
    printf("Value of pa = Address of a = %p\n",pa);
    printf("value of *pa = Value of a = %d\n",*pa);
    printf("Address of pa = %p\n",&pa);
    printf("Value of ppa = value of pa = %p\n",ppa);
    printf("value of *ppa = value of pa = %p\n",*ppa);
    printf("value of **ppa = value of a = %d\n",**ppa);
    printf("Address of ppa = %p\n",&ppa);

}