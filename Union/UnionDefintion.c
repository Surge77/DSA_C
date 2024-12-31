#include<stdio.h>

/*
Initialising a union

*/

typedef union personinfo
{
    char name[10];
    int age;
    float percentage;
}un_in;

int main(){

    un_in a;
    a.age = 12;
    printf("the age is = %d",a.age);
    //we need to study string copy for this string
    // a.name = "hanok";
    // printf("the age is = %s",a.name);

    a.percentage = 90.88;
    printf("\nthe age is = %f",a.percentage);


}