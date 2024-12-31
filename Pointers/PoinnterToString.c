#include<stdio.h>

//Pointer to the string

//Syntax:

//char *pointer_name = "string";


int main(){

    char *str = "C programming"; //*str -> C points to first letter of string

    for(int i=0; i<13; i++){

        printf("%c",str[i]); //space is also considered while printing

    }
    printf("\n%s",str); //prints the entire string
}