#include<stdio.h>

/*

reading A integer
*/

int main(){

    FILE *fp;
    int a;

    printf("Enter the character: \t");
    scanf("%d",&a);

    fp = fopen("challenge.txt","w");

    putw(a,fp); // t0 deal with integer we need to use putw and getw
    //the integer we read or write is stored in the asccii format in the file

    fclose(fp);

    fp = fopen("challenge.txt","r");

    printf("the integer fromt he file is : %d",getw(fp));

    fclose(fp);
}