/*
The process of allocation of memory at the time of execution is called dynamic memory allocation.The allocation and release of memory space
can be done with the help of some built in functions whose prototypes are found in the stdlib.h header file.These functions allocate memory from a
memory area called heap and release this memory whenever not required,so that it can be used for some other purpose.

Pointer play an important role in dynamic memory allocation because we can access the dynamically allocated memory only through pointers

If there is not sufficient memory available in heap then malloc() returns NULL.So we should always check the value returned by malloc()

Unlike memory allocated for variables and arrays,dynamically allocated memory has no name associated with it.So it can be accessed only through pointers.


Program to understand dynamic allocation of memory

The function malloc() returns a void pointer and we have studied that a void pointer can be assigned to any type of pointer without typecasting.
but we have used typecasting because it is a good practice to do
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p,n,i;
    printf("Enter the number of integers to be entered: ");
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    if (p==NULL){
        printf("Memory not available\n");
        exit(1);
    }
    for (i=0;i<n;i++){
        printf("Enter an integer: ");
        scanf("%d",p+i);

    }
    for (i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
}