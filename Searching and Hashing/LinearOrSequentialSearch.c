#include<stdio.h>
#include<stdlib.h>
#define MAX 50

/*
Sequential search is performed in a linear way i.e it starts from the beginning of the list and continues till we find the term or reach the
end of the list.The item to be searched is compared with each element of the list one by one,starting from the first element.
*/

//Sequential search in an array

int main(){

    int i,n,item,arr[MAX],index;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for (i=0;i<n;i++){
        printf("Enter value for arr[%d]\n",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d",&item);
    index = LinearSearch(arr,n,item);
    if (index==-1){
        printf("%d not found in array\n",item);
    }
    else{
        printf("%d found at position %d\n",item,index);
    }
} //End of main()

//The function LinearSearch() returns location of the item if found or -1 otherwise

int LinearSearch(int arr[], int n, int item) {
    int i;
    for (i = 0; i < n; i++) {
        if (item == arr[i]) {
            return i; // Return index if item is found
        }
    }
    return -1; // Item not found, return -1
}
