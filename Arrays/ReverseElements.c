#include<stdio.h>

//program to reverse the elements in an array

/*
In the for loop we have used comma operator and taken two variables i and j.The variable i is initialized with lower bound and j is initialized with upper bound.
After each pass of the loop,i is incremented while is decremented.Inside the loop a[i] is exchangd with a[j]. so a[0] will be exchanged with a[0]
a[1] with a[8], a[2] with a[7] and so on
*/ 

int main(){

    int i,j,temp,arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Before reversing the array is:\n");
    for (i =0; i<10; i++){

        printf("%d",arr[i]);
        printf(" \n");
    }

    for (i=0,j=9; i<j; i++,j--){

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("After reversing the array is:\n");
    for (i =0; i<10; i++){

        printf("%d\t",arr[i]);
        printf("\n");
    }
}