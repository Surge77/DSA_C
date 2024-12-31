#include<stdio.h>

/*
Reading a character from the file
*/

int main(){

    FILE *fp;
    char ch;

    fp = fopen("single.txt","r");

    //getchar();//getting a character from the string  

    ch = getc(fp);

    printf("the character from the file is : %c",ch);

    fclose(fp);
}