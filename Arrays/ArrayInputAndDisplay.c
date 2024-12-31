#include<stdio.h>
#include<stdlib.h>

//program to input values into an array and display them

/*

Suppose arr is an array of type int
------------------------------------------------------------------------------------
1.Reading values in arr

for (i=0; i<5;i++){
        scanf("%d",&arr[i]);
------------------------------------------------------------------------------------
2.Displaying values of arr

for (i=0; i<5;i++){
        printf("Element for arr[%d]: %d",i,arr[i]);

------------------------------------------------------------------------------------
3.Adding all the element of arr

Sum = 0 -> an external counting variable

for (i=0; i<5;i++){
        Sum += arr[i];

------------------------------------------------------------------------------------


*/

int main(){

    int arr[5],i; //In C we have to declare the counting variable outside the loop

    for (i=0; i<5;i++){

        printf("Enter the element for arr[%d]: \n",i);
        scanf("%d",&arr[i]);
    }

    for (i=0; i<5;i++){

        printf("arr[%d]: %d", i,arr[i]); // here the mistake was i did not specify the i variable
        printf("\n");
    }
    
    
}