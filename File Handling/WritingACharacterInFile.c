#include<stdio.h>

/*
Write a character into a file
*/

int main(){

    FILE *fp;

    printf("Enter the character: \t");
    char ch = getchar();


    fp = fopen("single.txt","w");

    //putchar(); //printing a single character on the screen

    putc(ch,fp); //this will print a single character in string
    //here we can also store the character in variable and print it

    fclose(fp);
}