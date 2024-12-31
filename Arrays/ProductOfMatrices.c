#include<stdio.h>

/*
Program for multiplication of two matrices

Multiplication of two matrices requires that the number columns in first matrix should be equal to the numbers of rows in second matrix.
If we multiply matrices of order mxn and nxp then the multiplied matrix will be of order mxp
*/

#define row1 3
#define col1 4
#define row2 col1
#define col2 2

int main(){

    int mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];
    int i,j,k;
    printf("Enter matrix mat1(%dx%d) row-wise : \n",row1,col1);
    for (i=0; i<row1;i++){

        for(j=0;j<col1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter matrix mat2(%dx%d) row-wise : \n",row1,col1);
    for (i=0; i<row2;i++){

        for(j=0;j<col2;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

//Multiplication

    for (i=0; i<row1;i++){

        for(j=0;j<col2;j++){
            mat3[i][j] = 0;
            for(k=0;k<col1;k++){
                mat3[i][j] += mat1[i][j] * mat2[i][j];
            }
        }
    }

    printf("The resultant matrix mat3 is :\n");

for (i=0;i<row1;i++){
    for(j=0;j<col2;j++){
        printf("%5d",mat3[i][j]);
    printf("\n");
    }
}

}