/*
Shell sort or Diminishing Increment Sort:

The insertion sort is not efficient because many moves are performed,and the reason for so many moves is that elements are moved only one position at
a time.The elements are moved only one position because only adjacent elements are compared.If we compare elements that are far apart then we can 
considerably reduce the number of moves thereby making insertion sort more efficient.

Shell sort is not a stable sort.It is an in place sort and space complexity is O(1)
*/

//Program of sorting using shell sort

#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX],i,j,k,n,incr;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter maximum increment (odd value) : ");
    scanf("%d",&incr);

    //Shell sort
    while(incr>=1)
    {
        for(i=incr ; i<n ; i++){
            k = arr[i];
            for (j=i-incr;j>=0 && k<arr[j];j=j-incr){
                arr[j+incr] = arr[j];
            }
            arr[j+incr] = k;
        }
        incr = incr-2; //Decrease the increment
    } //End of while
    
    printf("Sorted list is : \n");
    for (i=0;i<n;i++){

        printf("%d ",arr[i]);
    }
    printf("\n");
} //End of main

//This program is similar to the program of insertion sort,except for a few changes