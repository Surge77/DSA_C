/*
Sorting:

Sorting means arranging the data according to their values in some specified order,where order can be either ascending or descending.

Types of sorting:

There are two types of sorting,internal and external sorting.If the data to be sorted is small enough to be placed in the main memory at a time.
Then the sorting can take place in main memory and this sorting is called internal sorting.So in internal sorting all the data to be sorted is 
kept in the main memory during the sorting process


If there is large amount of data to be sorted which can't be placed in the main memory at a time.then the data that is currently being sorted is
brought into main memory and rest is on secondary memory i.e on external files like disks and tapes.This type of sorting is called external sorting  

Suppose that you are given some numbers and asked to arrange them in ascending order.The most intuitive way to do this would be to find the smallest
number and put in the first place and then find the second smallest number and put it in the second place and so on.This is the simple technique on which
selection sort is based.It is named so because in each pass it selects the smallest element and keeps it in its exact place

Suppose we have n elements stored in an array.First we will search the smallest element from the position of array.Now we will search smallest element 
fromo the remaining elements arr[1]...........arr[n-1] and exchange it with arr[1],This will place the second smallest element of the list at 1st pos
of array.This process will continue until the whole array is sorted

Selection sort is simple to implement and requires only one temporary variable for swapping elements.The main advantage of selection sort is that
data movement is very less.If an element is at its proper place then it will not be moved at all.so if many elements are at proper place i,e the list
is almost sorted then there will be very little data movement.Thus we see that the number of swaps depends on the order of data,and it can never be
more than n-1.The swaps are very less as compared to insertion and bubble sorts.If the records are large then cost of moving data is more than the 
const of comparisons, os if the records are large it is better to use selection sort

selection sort is not a stable sort.It requires only one temp variable so it is an in-place sort.Space complexity is O(10)
*/

//Program of sorting using selection sort

#include<stdio.h>
#define MAX 100

int main(){

    int i,j,n,temp,min, arr[MAX];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    //Selection sort

    for (i=0;i<n-1;i++){

        //Find the index of smallest element

        min = i;
        for (j=i+1;j<n;j++){
            if(arr[min] > arr[j])
            min = j;
        }
        if (i!=min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

    }

    printf("Sorted list is : \n");
    for (i=0;i<n;i++){

        printf("%d ",arr[i]);
    }
    printf("\n"); 

} //End of main()

/*
Each iteration of outer for loop corresponds to a single pass.In each iteration of outer for loop we have to exchange arr[i] with the smallest element
among arr[i]....arr[n-1].The inner for loop is used to find the index of the smallest element and it is stored in min.Initially variable min is initialized
with i.After this,arr[min] is compared with each of the element arr[i+1],arr[i+2]....arr[n-1] and whenever we get a smaller element.Its index is assigned
to min.

After finding the smallest element,It is exchanged with arr[i].We have preceded this swap operation with a condition to avoid swapping of an element with 
itself.This situation arises when an element is already in its proper place.
*/