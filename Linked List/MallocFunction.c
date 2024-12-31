#include<stdio.h>
#include<stdlib.h>  

/*

malloc() : used to allocate single block of memory at run-time

Syntax : pointer = (data_type *) malloc(byte_size);

*/

int main(){

    int *ptr;

    ptr = (int *)malloc(4);

    printf("Address of 4 bytes memory is: %d",(int)ptr );
}