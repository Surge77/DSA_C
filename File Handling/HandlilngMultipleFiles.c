#include<stdio.h>

/*

Handling Multiple Files


*/

int main(){
    
    FILE *fp, *fp1; //file pointer or structure pointer

    fp = fopen("hi.txt","r"); 
    fp1 = fopen("second.txt","w");
    
    fclose(fp);
    fclose(fp1);
}