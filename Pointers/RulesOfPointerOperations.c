#include<stdio.h>

//Rules of pointer OPERATIONS

// 1. A value cannot be assigned to some random address
// 2. Two pointer variables cannot be added
// 3. A pointer variable cannot be multiplied by a constant
// 4. A pointer variable can be intialized to NULL or 0 value

//we shouldn't violate these rules

int main(){

    int a = 100;
    int *p1 = &a;
    int *p2 = &a;
    int *p2 = NULL; //dummy pointer


    // &a = 100; invalid -> Rule 1
    // int add = p1 + p2; -> we cannot add two pointer variables
    // int mul = p1 * 10;  -> rule 3
    

    
}