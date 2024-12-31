#include<stdio.h>

/*

Challenge: read a character from the keyboard and store it in the file,and then get the character
            and print it to the screen
*/

int main(){

    FILE *fp;

    printf("Enter the character: \t");
    char ch = getchar();

    fp = fopen("third.txt","w");

    
    fp = fopen("third.txt","r");

    //getchar();//getting a character from the string  

    putc(ch,fp);

    printf("the character from the file is : %c",ch);

    fclose(fp);
}