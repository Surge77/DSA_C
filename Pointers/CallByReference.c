#include<stdio.h>

/*
call by reference method 

Arguments to the functions can be passed in two ways:

1.Call by value
2.Call by reference

In call by value only the values of the argments are sent to the functions while in call by reference addresses of the arguments are sent to the 
function.In call by value method any changes made to the formal arguments do not change the actual argument.In call by reference method,any changes
made to the formal argument changes the actual arguments also
*/

void ref(int *p,int *q);

//here we used call by reference and after passing the address the actual parameter also changed

int main(){

    int a=5,b=8;
    printf("before calling the function,a= %d and b= %d\n",a,b);
    ref(&a,&b);
    printf("after calling the function,a= %d and b= %d\n",a,b);

}

void ref(int *p, int *q){
    (*p)++;
    (*q)++;
    printf("inside function x = %d, y = %d\n",*p,*q);
}