#include<stdio.h>

/*
Writing a mixed data into the file


*/

int main(){

    FILE *fp;
    int a;
    float b;
    char ch[10];
    char c;

    fp = fopen("mixed.txt","r");

    fscanf(fp,"%d %f %s %c",&a,&b,&ch,&c);

    fclose(fp);

    printf("The integer value is : %d\n",a);
    printf("The float value is : %f\n",b);
    printf("The string value is : %s\n",ch);
    printf("The character value is : %c\n",c);




}