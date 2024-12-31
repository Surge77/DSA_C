#include<stdio.h>
#include<stdlib.h>

#define square(x) ( (x) * (x))
#define cube(x) (square(x) * (x) ) //a macro substitution inside another macro substition is called as nested macro..

#define M 50
#define N M+50
/*
NESTED MACRO SUBSTITUTION


*/

int main(){

    printf("The square is : %d\n",square(2));
    printf("The cube is : %d\n",cube(2));

    printf("the simple nested macro substitution is : %d",N);



}