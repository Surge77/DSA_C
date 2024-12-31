#include<stdio.h>
#include<stdlib.h>

/*

calloc() : used to allocate multiple blocks of memory at run time


syntax: pointer = (data_type *) calloc(n, byte_size); 

here n means n number of blocks i.e depends how much we pass through it 

calloc() : allocated n blocks of memory of size "byte_size" and return the address of the first block.
            by default calloc() will intitialized 0 to all its allocated block



Now we will create dynamic array with the help of calloc()


*/

int main(){

    int *ptr;
    int num;

    printf("Enter the size of the dynamic arrays: \t");
    scanf("%d",&num);

    ptr = (int *) calloc(num, sizeof(int)); //n block of 4 bytes

    // ptr = (int *) calloc(3,4); // 3 blocks of 4 bytes
    // printf("address of first block is %d",(int) ptr);

    for( int i =0; i < num ; i++){
        printf("Enter the %d number: \t",i+1);
        scanf("%d",&ptr[i]);
    }

    for( int i =0; i < num ; i++){
        printf("the %d number is : %d \n",i+1,ptr[i]);
    }





}