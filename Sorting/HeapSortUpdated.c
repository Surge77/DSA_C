/*

What is a heap?
A heap is a complete binary tree, and the binary tree is a tree in which the node can have the utmost two children. A complete binary tree is a binary tree 
in which all the levels except the last level, i.e., leaf node, should be completely filled, and all the nodes should be left-justified.
Min-heap or max-heap represents the ordering of array in which the root element represents the minimum or maximum element of the array.
Heap sort is performed in two phases:

Phase 1: Build a max heap or min heap from the given elements
Phase 2:Keep on deleting the root till there is only one element in the tree

The root of a heap always has the largest element so by successively deleting the root,we get the elements in descending order i.e first the largest 
element of list will be deleted then second largest and so on.We can store the deleted elements in a separate array or move then to the end of the same
array that represents the heap.

If we have n elements that are to be sorted,first we build a heap of size n.The elements arr[1], arr[2]....arr[n] form the heap.Then root is deleted
and we get a heap of size n-1 .So now the elements arr[1],arr[2]....arr[n-1] form the heap but arr[n] is not a part of heap.Now the root from heap
of size-1 is deleted and we get a heap of size n-2.The element deleted from root can be stored in arr[n-1].This process goes on till we delete the root
from heap of size 2 and get a heap of size 1 and this time the element deleted from root is stored in arr[2].

Heap sort is good for larger lists but it is not preferable for small list of data.It is not a stable sort.It has no need of extra space other than one
temp variable so it is an in place sort and space complexity is O(1).
*/

#include<stdio.h>
#define MAX 100

void heap_sort(int arr[], int size);
void buildHeap(int arr[], int size);
int del_root(int arr[], int *size);
void restoreDown(int arr[], int i, int size);
void display(int arr[], int n);

int main() {
    int i, n, arr[MAX];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Entered list is: \n");
    display(arr, n);
    heap_sort(arr, n);
    printf("Sorted list is: \n");
    display(arr, n);
    return 0;
}

void heap_sort(int arr[], int size) {
    int max;
    buildHeap(arr, size);
    printf("Heap is: ");
    display(arr, size);
    while (size > 1) {
        max = del_root(arr, &size);
        arr[size] = max; // Corrected index
    }
}

void buildHeap(int arr[], int size) {
    int i;
    for (i = size / 2; i >= 0; i--) { // Changed condition from size/2 to size/2-1
        restoreDown(arr, i, size);
    }
}

int del_root(int arr[], int *size) {
    int max = arr[0]; // Changed index to 0
    arr[0] = arr[*size - 1]; // Corrected index and size
    (*size)--;
    restoreDown(arr, 0, *size); // Changed index to 0
    return max;
}

void restoreDown(int arr[], int i, int size) {
    int left = 2 * i + 1, right = left + 1; // Changed calculation of left and right child indices
    int num = arr[i];
    while (right < size) { // Changed condition to ensure right child exists
        if (num >= arr[left] && num >= arr[right]) {
            arr[i] = num;
            return;
        }
        else if (arr[left] > arr[right]) {
            arr[i] = arr[left];
            i = left;
        }
        else {
            arr[i] = arr[right];
            i = right;
        }
        left = 2 * i + 1; // Corrected calculation of left child index
        right = left + 1; // Corrected calculation of right child index
    }
    if (left < size && num < arr[left]) { // Changed condition to ensure left child exists
        arr[i] = arr[left];
        i = left;
    }
    arr[i] = num;
}

void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) { // Changed condition to loop up to n
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
The changes made include:

Correcting the indices used for array operations to ensure they are within bounds and correctly accessing array elements.
Adjusting loop conditions to iterate over the correct range of array elements in the display function.
Ensuring proper calculation of left and right child indices in the restoreDown function.
Making sure to handle the case where the right child doesn't exist in the restoreDown function.

*/
