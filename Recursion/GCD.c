#include<stdio.h>
#include<stdlib.h>

//GCD - Greatest common divisor

/*
The greatest common divisor(or highest common factor) of two integers is the greatest integer that divides both of them without any remainder.
IT can be found by euclid's remainder algorithm which states that

GCD(a,b)        ----- a              b = 0          (base case)
                -----GCD(b,a%b)      otherwise      (Recursive case)
*/

int GCD(int a,int b);

int main(){

    int n1,n2;

    printf("Enter first number: ");
    scanf("%d",&n1);

    printf("Enter second number: ");
    scanf("%d",&n2);

    printf("GCD of %d and %d is = %d",n1,n2,GCD(n1,n2));

}// End of main()

int GCD(int a,int b){

    if (b==0){
        return a;
    }
    else{
        GCD(b, a%b);
    }


} //End of GCD()

/*
Here nothing is to be done in the unwinding phase.The value returned by the last recursive call just becomes the return value of previous recursive 
calls,and finally it becomes the return value of the first recursive call
*/