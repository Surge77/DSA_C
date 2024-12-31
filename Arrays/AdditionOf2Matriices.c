#include<stdio.h>
#define row 3
#define col 4

/*
Program for addition of two matrices
*/
int main(){
int i,j,mat1[row][col],mat2[row][col],mat3[row][col];

printf("Enter the elements of the matrix 1 (%dx%d) row-wise: ",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&mat1[i][j]);
    }
}

printf("Enter the elements of the matrix 1 (%dx%d) row-wise: ",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&mat2[i][j]);
    }
}

//addition

for(i=0;i<3;i++){
    for(j=0;j<col;j++){
        mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
}

printf("The resultant matrix mat3 is :\n");

for (i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("%5d",mat3[i][j]);
    printf("\n");
    }
}



}