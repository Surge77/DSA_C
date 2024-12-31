#include<stdio.h>
#include<stdlib.h>

/*
Program too understand array of structures

An array of structure can be intialized as:

struct student stuarr[3] =  {

    {"mary",12,98.5},
    {"john,11,9.9"},
    {"tom",12,89.6}

};

*/

struct student{

    char name[20];
    int rollno;
    float marks;

};

int main(){

    int i;
    struct student stuarr[10];
    for (i=0;i<10;i++){

        printf("Enter name,roll no and marks : ");
        scanf("%s %d %f",&stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
    }
    for (i=0;i<10;i++){

        printf("%s %d %f\n",&stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
    }
}