/*
Quick Sort:

Quick sort is based on the divide and conquer technique.In this technique a problem is divided into smaller problems which are again divided into smaller
problems and so on,hence solving the bigger problem reduces to solving these smaller ones.As the name suggests quick sort is a very fast sorting 
technique and its average case performance is O(n log n).It is an in place sort so no additional space is required for sorting.It is also known as
partition exchange sort and is very efficient because the exhanges occur between elements that are far apart,and so less exchanges are needed to place
an element in its final position.

We choose a an element from the list and place it at its proper position in the list i.e at the position where it would be in the final sorted list.
We call this element as pivot element
-all the elements to the left of pivot are less than or equal to the pivot and
-all the elements to the right of pivot are greater than or equal to the pivot

Any element of the list can be taken as a pivot but for convenience the first element is taken as the pivot.

The average case performance is closer to the best case than to the worst case and is found out O(nlog2n) It is not a stable sort.Space complexity for 
this sort is O(log n)
*/

//Program of sorting using quick sort

#include<stdio.h>
#define MAX 100

void quick(int arr[],int low,int up);
int partition(int arr[],int low,int up);

int main(){

    int arr[MAX],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    quick(arr,0,n-1);
    printf("Sorted list is : \n");
    for (i=0;i<n;i++){

        printf("%d ",arr[i]);
    }
    printf("\n");

} //End of main()

void quick(int arr[],int low,int up){

    int pivloc;
    if(low>=up){
        return;
    }
    pivloc = partition(arr,low,up);
    quick(arr,low,pivloc-1); //process left sublist
    quick(arr,pivloc+1,up); //process right sublist
} //End of quick()

int partition(int arr[],int low,int up)
{
    int temp,i,j,pivot;
    i = low+1;
    j = up;
    pivot = arr[low];
    while (i <= j)
    {
        while ((arr[i] < pivot) && (i < up)){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if (i < j)
        {
            temp = arr[j];
            arr[j] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else {
            i++;
        }
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
} //ENd of partition()

