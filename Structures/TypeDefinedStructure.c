#include<stdio.h>

/*
Type-defined structure -> it is a shortcut of defining a structure

typedef struct tag_name
{
    datatype member1;
    datatype member2;
    .
    .
    datatype memberN;

} type_name;

why do we need this?
-to shorten the declaration at the starting of strucuture variable creation

RULES TO INITIALIZATION OF A STRUCTURE VARIABLE:

1.we cannot initialize any structure member while defining a structure.
2.while initializing a structure variable,its value must match with structure member orderly
3.partial initialization is allowed
4.initialized member will have default value, 0 for int and float , and '\0' for char and strings


*/

typedef struct personinfo{

    int age;
    float percentage;
    char name[10];

} persons; //this will override the above structure name

int main(){

    //now to initialize the structure variables
    persons person1 = {24,109.5,"Hancoc"}; //full initialization
    persons person2; //= {34,102.3,"john"}; 
    // persons person2 = {34,102.3,};//partial initialization 

    //accessing the structure variables

    printf("name of person 1 : %s\n",person1.name);

    person2 = person1; //copying;
    
    printf("name of person 2 : %s\n",person2.name);

    // if(person1 == person2){ //we cant compare structure variables

    //     printf("same data...\n");
    // }

    //this comparison is valid
    if(person1.age == person2.age){
        printf("same age..\n");
    }


}