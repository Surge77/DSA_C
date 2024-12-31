#include<stdio.h>
#include<stdlib.h>

//Multiplication of two numbers using recursion

/*
Recursion is a programming pattern that can be useful for traversing data structures, such as trees or linked lists,
and making algorithms easier to understand. 
Recursion can also be used when a task can be broken down into smaller, simpler tasks of the same kind

Advantages of Recursion
On the other hand, recursion has the following advantages:

For a recursive function, you only need to define the base case and recursive case, so the code is simpler and shorter than an iterative code.
Some problems are inherently recursive, such as Graph and Tree Traversal.

Disadvantages of Recursion
Recursion, broadly speaking, has the following disadvantages:

A recursive program has greater space requirements than an iterative program as each function call will remain in the stack until the base case is reached.
It also has greater time requirements because each time the function is called, the stack grows and the final answer is returned when the stack is popped completely.
*/

int mul(int a,int b);

int main(){

    int n1,n2;

    printf("Enter first number: ");
    scanf("%d",&n1);

    printf("Enter second number: ");
    scanf("%d",&n2);

    printf("%d X %d = %d",n1,n2,mul(n1,n2));


}

int mul(int a,int b){

    if (b==1){ //This serves as the base case of recursion
        return a;
    }
    else{
        
        return (mul(a,b-1)+a); //The answer start to get added when the base case hits and when the unwinding phase begins

    }
}