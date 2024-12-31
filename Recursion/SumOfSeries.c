#include<stdio.h>
#include<conio.h>

//Program to display and find out the sum of series
// series : 1 + 2 + 3 + 4 + 5 ..

/*
int rseries(int n){
    int sum;
    if (n==0){
        return 0;
    }
    return  n + rseries(n-1);
    printf("%d + ",n);

This function will return the sum of the series but willl not display any terms of the series.This is because in the unwinding phase when control returns 
to the previous invocation,the return statement (return n + rseries(n-1)) is executed and so the function returns without executing the printf function
To make the function work correctly we can write like this

int rseries(int n){
    int sum;
    if (n==0){
        return 0;
    }
    sum = ( n + rseries(n-1));
    printf("%d + ",n);
    return sum;

*/

int rseries(int n);

int main(){

    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("\b\b = %d\n\n\n", rseries(n)); // \b to erase last + sign
} //End of main()

int rseries(int n){
    int sum;
    if (n==0){
        return 0;
    }
    sum = ( n + rseries(n-1));
    printf("%d + ",n);
    return sum;
} //End of rseries()
