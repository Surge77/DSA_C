/*
Bubble Sort proceeds by scanning the list and exchanging the adjacent elements,if they are out of order with respect to each other.It compares each
element with its adjacent element and swaps them if they are not in order i.e arr[i] will be compared with arr[i+1] and if arr[i] > arr[i+1] then they will 
be swapped

In selection sort we searched for the smallest element and then performed the swap,while here swap will be performed as soon as we find two adjacent
elements out of order.So in selection sort there was only one swap in a pass while in bubble sort there may be many swaps in a single pass.Hence 
bubble sort is not an efficient sorting technique but it is simple and easy to implement

Bubble sort is a stable sort.It requires only one temporary variable so it is an place sort,space complexity is O(1)

The main advantage of this algorithm is that is simple and easy to implement,additional space requirement is only one temp variable and it behaves
O(n) for sorted array of elements.Bubble sort should not be used for large list,it should generally be used for smaller lists

*/

//Program using bubble sort

#include<stdio.h>
#define MAX 100

int main(){
    
    int arr[MAX],i,j,temp,n,xchanges;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    //Bubble sort
    for (i=0;i<n-1;i++)
    {
        xchanges = 0;
        for (j=0; j<n-1-i;j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                xchanges++;
            }
        }
        if (xchanges==0){ //if list is sorted
        break;
        }
    }

    printf("Sorted list is : \n");
    for (i=0;i<n;i++){

        printf("%d ",arr[i]);
    }
    printf("\n");
    
} //End of main()