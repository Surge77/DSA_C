#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
Program to assign a structure variable to another structure variable
*/

struct student{

    char name[20];
    int rollno;
    float marks;

};

int main(){
    struct student stu1 = {"oliver",25,68},stu2;
    stu2 = stu1;
    printf("Stu1 : %s  %d  %.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("Stu2 : %s  %d  %.2f\n",stu2.name,stu2.rollno,stu2.marks);



}