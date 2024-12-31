#include<stdio.h>

/*
closing a file

Syntax:

file_pointer = fopen("file_name.extension","file_mode");

File Modes: There are only three modes
r = read mode
w = write mode
a = append mode
we also have r+, w+, a+ these are just recent features of recent compilers

*/

int main(){

    FILE *fp; //file pointer or structure pointer

    fp = fopen("hi.txt","w"); 
    
    fclose(fp);


}