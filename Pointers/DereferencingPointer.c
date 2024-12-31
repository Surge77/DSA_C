#include<stdio.h>

/*
The indirection operator in C is the asterisk (*) symbol. It is used to access the value 
stored at the memory address pointed to by a pointer. When used with a pointer variable, it returns the value that the pointer points to.

The indirection operation can be read as 'value at the address'.this indirection(*) is different from the asterisk that was used while declaring pointer
variable
*/

int main(){

    int a= 87;
    float b = 4.5;
    int *p1 = &a;
    float *p2 = &b;
    printf("value of p1 = Address of a = %p\n",p1);
    printf("value of p2 = Address of b = %p\n",p2);
    printf("address of p1 = %p\n",&p1); // %p is used to printing the address of a pointer the addresses are depending by our system bit.
    printf("address of p2 = %p\n",&p2);
    printf("Value of a = %d %d %d\n",a,*p1,*(&a));
    printf("Value of b = %d %d %d\n",b,*p2,*(&b));

}