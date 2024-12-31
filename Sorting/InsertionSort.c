/*
Insertion Sort:

In this sorting technique the array is divided into two parts
1.Sorted Sublist
2.Unsorted Sublist

Initially the sorted part contains only the first element of the list and unsorted part contains the rest of the elements.In each pass,the first
element from the unsorted part is taken and inserted into the sorted part at appropriate place.If there are n elements in the list then after n-1 
passes the unsorted part disappears and our whole list becomes sorted.

Insertion sort is a stable sort.It requires only one temporary variable so it is an in place sort,space complexity is O(1)
*/

//Program of sorting using insertion sort

#include<stdio.h>
#define MAX 100

int main(){

    int arr[MAX],i,j,temp,n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for (i=0; i<n; i++){

        printf("Enter element[%d]",i+1);
        scanf("%d",&arr[i]);
    }

    //Insertion sort
    //here a for and while loop is used

    for (i=1; i<n; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j>=0 && arr[j]> temp){

            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("Sorted list is : \n");
    for (i=0;i<n;i++){

        printf("%d ",arr[i]);
    }
    printf("\n");
} //End of main()