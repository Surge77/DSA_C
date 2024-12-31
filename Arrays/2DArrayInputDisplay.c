#include<stdio.h>
#define row 3
#define col 4


/*
--Program to input and display a matrix

For processing 2D arrays we use two nested loops.The outer for loop corresponds to the row and the inner loop corrresponds column

1.Reading values in 2D array

for(i=0;i<4;i++){
    for(j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
    }
}

2.Displaying values of array

for(i=0;i<4;i++){
    for(j=0;j<5;j++){
        printf("%d ",arr[i][j]);
    }
}
This will print al the elements in the same line.If we want to print the elements of different rows on different lines then we can write

for(i=0;i<4;i++){
    for(j=0;j<5;j++){
        printf("%d ",arr[i][j]);
    print("\n");
    }
}

*/

int main(){

    int i,mat[row][col],j;

    printf("Enter the elements of the matrix (%dx%d) row-wise: ",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
    }

    printf("The matrix you have entered is:\n");

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%5d ",mat[i][j]);
        printf("\n");
        }
    }

}


}


