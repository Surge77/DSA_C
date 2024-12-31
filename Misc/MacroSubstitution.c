#include<stdio.h>
#include<stdlib.h>

#define M 50
#define G 56.2
#define S "Hi, Hello"
#define C '$'

#define num 50*50 //this expression is being replaces with num
#define Like sizeof(int)*5  //   4*5 = 20
#define div 40/40
#define divs 30+20

#define check if(a==b)
#define space
#define write printf("equal...")

/*
MACRO SUBSTITUTION : literal text subsitution

syntax:

#define identifier string

this is also called symbolic constants

*/

int main(){

    int a = 30,b= 30;

    printf("Integer Macro Substitution: %d\n",M);
    printf("Floating point Macro Substitution: %f\n",G);
    printf("String Macro Substitution: %s\n",S);
    printf("Character Macro Substitution: %c\n",C);

    printf("The result is: %d\n",num);
    printf("The result is: %d\n",Like);
    printf("The result is: %d\n",div/divs); //applies bodmas rule
    printf("The result is: %d\n",div);

    check space write; //this uses macro substitution to run all the three statements

}