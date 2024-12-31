#include<stdio.h>

/*
reading a Text into a file...

Syntax:

fgets(char_array,no,no_chars,file_pointer);

*/

int main(){

    FILE *fp;

    char ch[20];

    fp = fopen("textt.txt","r");

    fgets(ch,7,fp); // this function reads 7 characters from the file and store it back to character arrays ch


    fclose(fp);

    printf(" %s",ch);
}