#include<stdio.h>

struct personinfo{

        int age;
        float percentage;
        char name[10];
        //we can't initialize these variables in structure
        //we are just creating a template 
        //we can also decalare this structure outside of main function
        //it is a good practice to decalare it outside of main function to separate out the main program

    };

int main(){

//A structure variable is a variable declared to access all the structure members is called as structure variable

    struct personinfo person1,person3; // structure variable, we can also declare multiple in same line
    struct personinfo person2; //another structure variable

    

    
}