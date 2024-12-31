/*
Program to understand pointer to structures

We can also have pointers that point to individual members of structure variable.

int *p = &stu.rollno;
float *ptr = &stu.marks;

The expression &stu.rollno is equivalent to &(stu.rollno) because the precedence of dot operator is more than that of address operator
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{

    char name[20];
    int rollno;
    int marks;

};

int main(){
    struct student stu = {"Mary",25,68};

    struct student *ptr = &stu;
    printf("Name: %s\n",ptr->name);
    printf("Roll no: %d\n",ptr->rollno);
    printf("Marks : %d\n",ptr->marks);


}