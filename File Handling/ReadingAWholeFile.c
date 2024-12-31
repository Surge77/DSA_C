#include<stdio.h>

/*
Reading a whole file...

Syntax: 

In cases where the text is huge we cannot count the number of characters so we use

getc()



*/

int main(){

    FILE *fp;
    char ch;

    fp = fopen("textt.txt","r");

    //with the help of loop we will loop through each character and print it till the end of file

    ch = getc(fp);

    while ((ch = getc(fp)) !=EOF) 
    {
        printf("%c",ch);
    }

    fclose(fp);
    

    
}