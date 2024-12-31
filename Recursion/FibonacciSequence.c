#include<stdio.h>
#include<stdlib.h>

//Program to generate fibonacci series
/*
Fibonacci series is a sequence of numbers in which the first two numbers are 1, and after that each number is the sum of previous two numbers

1,1,2,3,5,8,13,21,34,55,89

*/

int fib(int n);

int main(){

    int nterms,i;

    printf("Enter the number of terms: ");
    scanf("%d",&nterms);

    for (i=0;i<nterms;i++){
        printf("%d ",fib(i));
    }


} //End of main()

int fib(int n){

    if (n==0 || n==1){
        return 1; //Base case

    }
    else{
        return(fib(n-1) + fib(n-2)); //Recursive call
    }
}//End of fib()