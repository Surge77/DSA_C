#include<stdio.h>
#include<stdlib.h>

#define sun(x) (x+x) //here we passed a parameter x and it will be replaces in x+x
#define cube(x) (x*x*x) 

/*

MACRO SUBSTITUTION with Arguments....



*/

int main(){

    printf("Macro substitution with arg: %d\n",sun(2));
    printf("Macro substitution of cube : %d\n",cube(2));
}