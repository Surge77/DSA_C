#include<stdio.h>

/*
Writing a text into a File....

Syntax:

fputs("string",file_pointer); function of stdio.h library

*/

int main(){

    FILE *fp;
    char *ch = "this is a text too and this is a bit long"; //this is a character pointer

    fp = fopen("textt.txt","w");

    fputs(ch,fp);

    fclose(fp);
    //this way we can store any number of series of characters or text in file
    //this cannot store n number of lines

    
}