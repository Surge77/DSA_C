/*
WHAT IS COMMAND LINE ARGUMENT?

command line argument is an argument passed to the program when it is invoked

parameter/argument will be passsed to the main() function

WHY CLA?

-TO control the logic of the program from the outside

Syntax of CLA:

int main(int argc, char *argv[])
{
    body
}

argc : count of number of arguments on the command line
*argv[] : array of pointer of type "char" and it holds all the arguments passed to main()

*/

#include<stdio.h>

int main(int argc, char *argv[]){

        printf("The number of arguments : %d\n",argc); // argc = n + 1
        printf("the first argument %s",argv[0]); //prints the name of file or path of project 

}
