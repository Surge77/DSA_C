#include<stdio.h>
#include<stdlib.h>

/*
Program to find the factorial of a number by recursive method
*/

long int fact(int n);

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num<0)
        printf("No factorial for negative numbers\n");
    else 
        printf("The factorial of %d is %ld\n",num,fact(num));

} //End of main()

long int fact(int n){

    if (n==0)
        return 1;
    else 
        return (n*fact(n-1));
} //End of fact()