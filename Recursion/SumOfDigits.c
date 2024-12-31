#include<stdio.h>
#include<conio.h>


int sumdigits(long int n);


int main(){

    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("Sum of digit %d is : %ld ",n,sumdigits(n));
    


}

// Function to find the sum of digits of an integer
int sumdigits(long int n){

    if (n/10==0){
        return n; //If n is a single digit number

    }
    else
    {
    return n%10 + sumdigits(n/10);
    }
} //End of sumdigits()





