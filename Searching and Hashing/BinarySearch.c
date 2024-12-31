/*
Prerequisite for binary search is that the array should be sorted..Firstly we compare the item to be searched with the middle element of the array
If the item is found there our search finished successfully otherwise the array is divided in two halves,first half contains all elements to the left
of the middle element and the other consists of all the elements to the right side of the middle element.Since the array is sorted,all the elements 
in the left half will be smaller than the middle element and the elements in the right half will be greater than the middle element.If the item to be
searched is less than middle element it is searched in left half otherwise it is searched in right half.

Recursive function for binary search:

int RBinarySearch(int arr[],int low,int up,int item)
{
    int mid;

    if(low>up){
        return -1;
    }
    mid = (low+up)/2;
    if(item > arr[mid]) //search in right half
                RBinarySearch(arr,mid+1,up,item);
    else if{
            RBinarySearch(arr,low,mid-1,item);
    }else {
        return mid;
    }
}
*/

//Binary search in an array

#include <stdio.h>

#define MAX 100

int BinarySearch(int arr[], int size, int item);

int main() {
    int i, size, item, arr[MAX], index;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements in sorted order: \n");

    for (i = 0; i < size; i++) {
        printf("Enter element[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
    index = BinarySearch(arr, size, item);

    if (index == -1) {
        printf("%d not found in array\n", item);
    }
    else {
        printf("%d found at position %d\n", item, index);
    }
    return 0;
}

int BinarySearch(int arr[], int size, int item) {
    int low = 0, up = size - 1, mid;

    while (low <= up) {
        mid = (low + up) / 2;
        if (item > arr[mid]) {
            low = mid + 1; //search in right half
        }
        else if (item < arr[mid]) {
            up = mid - 1; //search in left half
        }
        else { // item == arr[mid]
            return mid;
        }
    }
    return -1; // item not found
}
