#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main() {
    int i, n, item, arr[MAX];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        printf("Enter value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
    
    for (i = 0; i < n; i++) {
        if (item == arr[i]) {
            printf("Element %d found at position %d\n", item, i);
            break;
        }
    }
    
    if (i == n) {
        printf("Element %d not found\n", item);
    }

    return 0;
}
