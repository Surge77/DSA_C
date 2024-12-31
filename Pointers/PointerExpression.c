#include<stdio.h>

// Pointer Expression...
// Any expression that has pointers in it as a operand is called pointer expression


int main(){

    int a = 100 , b = 200;
    int *p1 = &a;  //pointer pointing at a
    int *p2 = &b; //pointer pointing at b

    // int add = *p1 + *p2; //this is pointers addition expression

    printf("Addition of %d and %d is %d\n ",*p1,*p2,*p1 + *p2); //this is more efficient than wasting a variable

    //other expressions
    printf("subtraction of %d and %d is %d \n",*p1,*p2,*p1 - *p2);

    printf("multiplication of %d and %d is %d \n",*p1,*p2,*p1 * *p2);

    printf("division of %d and %d is %f \n",*p1,*p2,(float)*p1 / *p2);
    //here we need to typecast explicitly to get the desired output



}