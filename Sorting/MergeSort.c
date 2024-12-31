/*
Merge Sort:

The main task in merge sort is merging two sorted lists into a single sorted list.If there are two sorted arrays,then process of combining these
sorted arrays into another sorted array is called merging.A simple approach could be to place the second array after the first and then sort the 
whole by applying any sorting technique,but by doing this we are not utilizing the fact that both the arrays are sorted.Since both arrays are sorted,
we can merge them efficiently by making only one pass through each array.

We will take one element from each array,compare them and then take the smaller one in third array.This process will continue until the elements of one
array are finished.Then the remaining elements of unfinished array put in the third array.

Initially i,j and k point to the beginning of the three arrays so i=0,j=0,k=0.The elements arr1[i] and arr2[j] are compared,and the smaller one is 
copied to the third array arr3 at position k.The variable k is incremented and one of the varibles i or j is incremented

Merge sort is a stable sort.Since the operation of merging is not in place,merge sort is also not as in place sort required O(n) extra space
*/

//Program of merging two sorted arrays into a third sorted array

#include<stdio.h>
#define MAX 100

void merge(int arr1[],int arr2[],int arr3[],int n1,int n2);

int main(){

    int arr1[MAX], arr2[MAX],arr3[2*MAX],n1, n2,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n1);
    printf("Enter all the elements in sorted order: \n");
    for (i=0; i<n1; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements in array 2 : ");
    scanf("%d",&n2);
    printf("Enter the elements in sorted order: \n");
    for (i=0; i<n1; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    merge(arr1,arr2,arr3,n1,n2);
    printf("\nMerged list : ");
    for (i=0;i<n1+n2;i++){

        printf("%d ",arr3[i]);
    }
    printf("\n");
} //End of main

void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i,j,k;

    i=0; //Index for first array
    j=0; //Index for second array
    k=0; //Index for merged array

    while ((i<= n1-1)&& (j<= n2-1))
    {
        if (arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];

        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while( i <= n1-1) //Put remaining elements of arr1 into arr3
    {
        arr3[k++] = arr1[i++];
    }
    while(j <= n2 -1 ) //Put remaining elements of arr2 and arr3
    {
        arr3[k++] = arr2[j++];
    }

}//End of merge()
