#include<stdio.h>

/*
Program to pass an whole array to a function

We can see the changes made to the array inside the called function are reflected in the calling function,The name of the formal argument is different
but it refers to the original array

*/

void fun(int val[]);

int main(){

    int i,arr[6] = {1,2,3,4,5,6};
    fun(arr);
    printf("Contents of the array are now:");

    for (i=0; i<6;i++){

        printf("\n%d",arr[i]);

    }

}

void fun(int val[]){

    int sum=0,i;
    for (i=0; i<6; i++){

        val[i] = val[i]*val[i];
        sum = val[i];
        
    }
    printf("The sum of squares = %d\n",sum);
}