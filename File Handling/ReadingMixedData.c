#include<stdio.h>

/*
Reading a mixed data into the file

Syntax:  fprintf(fp,"control string",data);

*/

int main(){

    FILE *fp;

    fp = fopen("mixed.txt","w");

    fprintf(fp,"%d %f %s %c",123 ,3.4,"hello",'A');

    fclose(fp);




}