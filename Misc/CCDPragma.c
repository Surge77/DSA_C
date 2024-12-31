#include<stdio.h>
#include<stdlib.h>

/*

compiler control directives

#pragma is used to turn on or off some functionalities in the program

*/

//function declaration
void fun1();
void fun2();

void __attribute__((constructor)) fun2();
void __attribute__((destructor)) fun1();
//the gcc compiler does not support the pragma function directly so we needed to add this piece of code
//if we don't use this we get warnings from gcc compiler and doesn't show the desired output

#pragma startup fun2()
//startup here means to execute the fun2() before the main function

#pragma exit fun1()
//exit means after executing main function execute the fun1()

int main(){

    printf("This is in main()...\n");


}

//function definition
void fun1(){

    printf("This is after main()....\n");
}

void fun2(){

    printf("This is before main()...\n");
}