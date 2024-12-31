
/*
Program to understand the use of realloc() function

We may want to increase or decrease the memory allocated by malloc() or calloc().The function realloc() is used to change the size of the memory block.
It alters the size of the memory block without losing the old data.This is know as reallocation of memory.

The function takes two arguments,first is a pointer to the block of memory that was previously allocated by malloc() or calloc() and second one is the 
new size for that block

*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,*ptr;
    ptr = (int *)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available\n");
        exit(1);
    }
    printf("Enter 5 integers: ");
    for (i=0;i<5;i++){
        scanf("%d",ptr+i);
    }
    //allocated memory for 4 more integers
    ptr = (int *)realloc(ptr,sizeof(int));
    if(ptr==NULL){
        printf("Memory not available\n");
        exit(1);
    }
    printf("Enter 4 more integers: ");
    for (i=5;i<9;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<9;i++){
        printf("%d ",*(ptr+i));
    }
    
}