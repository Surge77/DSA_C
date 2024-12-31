#include<stdio.h>
#include<stdlib.h> //if we give angle brackets the preprocessor will search this file in standard c library
#include "FiileInclusionTest.c" //this is not a standard library file we have created a local file and included it in main function
//if this file is not present in local directory it will automatically check it in standary c library after that

//these two are file inclusion directives or header files or preprocessor files
//we are including these libraries in main function

/*

File Inclusion Directives...


*/

int main(){

    printf("M : %d \nN : %d",M,N);




}