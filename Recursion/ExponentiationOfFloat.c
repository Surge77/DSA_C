/*
The iterative definition for finding a^n is 

a^n = a*a*a*...........n times

The recursive definition can be written as:

a^n =   1                  n = 0 (Base case)
        a*a^n-1            n>0  (Recursive case)
*/

//Program to raise a floating point number to a positive integer

#include<stdio.h>

float power(float a , int n);

int main(){

    float a ,p;
    int n;
    printf("Enter a and n: ");
    scanf("%f %d",&a,&n);
    p = power(a,n);
    printf("%f raised to power %d is %f\n",a,n,p);
} //End of main()

float power(float a,int n)
{
    if (n==0){
        return 1;
    }else{
        return (a*power(a,n-1));
    }
} //End of power()
