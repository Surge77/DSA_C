#include<stdio.h>

//Program to find the largest and smallest in an array

int main(){

    int i,small,large,arr[10] = {2,5,4,1,8,9,11,6,3,7};
    small = large = arr[0];
    //we have taken the value of first elemrnt as the initial value of small and large we will start comparing from second element onwards 
    //so this time we have started the loop from 1 instead of 0
    for (i=1;i<10;i++){

        if (arr[i] > large){
            large = arr[i];
        }
        if (arr[i] < small){
            small = arr[i];
        }
    }

printf("The largest value is %d\nThe smallest value is %d\n",large,small);
}