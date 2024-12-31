#include<stdio.h>

/*
Opening a file

Syntax:

file_pointer = fopen("file_name.extension","file_mode");

File Modes: There are only three modes
r = read mode
w = write mode
a = append mode
we also have r+, w+, a+ these are just recent features of recent compilers

*/

int main(){

    FILE *fp; //file pointer

    fp = fopen("hi.mp4","w"); //this created a new text file names as hi in the corresponding directory
    //we can created any type of file with this
    //here we can also specify the path where we want to create the file

}