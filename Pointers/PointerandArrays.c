#include<stdio.h>


//Arrays and pointers


int main(){

    int arr[5] = {1,2,3,4,5};
    int *p1 = arr; //this pointer is pointing to the first element of the array
        
    for (int i= 0; i<5; i++)
    {
        printf("The element of arr[%d] : %d\n",i,*p1);
        printf("The address of arr[%d] : %d\n",i,(int)p1);
        p1++;
        printf("\n");
    
    }
    
    



}