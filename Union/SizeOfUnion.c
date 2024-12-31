#include<stdio.h>

/*

Getting the size of the structure and union...


*/

typedef union personinfo
{
    char name[10];
    int age;
    float percentage;
}un_in;

typedef struct personinfo1
{
    char name[10];
    int age;
    float percentage;
}st_in;

int main(){

    printf("The size of structure is %d\n",sizeof(st_in));
    //the size depends on different machines and architectures
    printf("The size of union is %d\n",sizeof(un_in));

}