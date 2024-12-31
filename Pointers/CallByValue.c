#include<stdio.h>

/*
call by value method 

Arguments to the functions can be passed in two ways:

1.Call by value
2.Call by reference

In call by value only the values of the argments are sent to the functions while in call by reference addresses of the arguments are sent to the 
function.In call by value method any changes made to the formal arguments do not change the actual argument.In call by reference method,any changes
made to the formal argument changes the actual arguments also
*/

void value(int x,int y);

//here we used call by value method and we can see that by this method the formal or actual paramter didnt change

int main(){

    int a=5,b=8;
    printf("before calling the function,a= %d and b= %d\n",a,b);
    value(a,b);
    printf("after calling the function,a= %d and b= %d\n",a,b);

}

void value(int x, int y){
    x++;
    y++;
    printf("inside function x = %d, y = %d\n",x,y);
}