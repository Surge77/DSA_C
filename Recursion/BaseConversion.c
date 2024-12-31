/*
We will write a recursive function which will convert a decimal number to binary,octal and hexadecimal base.To do this conversion we have to divide
the decimal number repeatedly by the base till it is reduced to 0 and print the remainders in reverse order.IF the base is hexadecimal then we have to
print alphabets for remainder values greater than aor equal to 10.We want to print the remainderss in reverse order so we can do this work in 
unwinding phase
*/

//Program to convert a positive decimal number to binary,octal or hexadecimal

#include<stdio.h>

void convert(int, int);

int main(){

    int num;
    printf("Enter positive decimal number: ");
    scanf("%d",&num);
    convert(num,2);    printf("\n");
    convert(num,8);    printf("\n");
    convert(num,16);    printf("\n");
} //End of main()

void convert(int num,int base){

    int rem = num%base;
    if (num==0){
        return;
    }
    convert(num/base,base);

    if (rem < 10){
        printf("%d",rem);
    }else{
        printf("%c",rem-10+'A');
    }
} //End of convert()