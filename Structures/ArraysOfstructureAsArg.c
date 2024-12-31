#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Program to understand how an array of structures is sent to a function

*/

struct student{

    char name[20];
    int rollno;
    int marks;

};

void display(struct student);
void dec_marks(struct student stuarr[]);

int main(){

    int i;
    struct student stuarr[3] = {

        {"mary",12,56},
        {"john",11,97},
        {"tom",12,45}
    };

    dec_marks(stuarr);
    for (i=0;i<3;i++){
        display(stuarr[i]);
    }

}

void dec_marks(struct student stuarr[]){
    int i;
    for (i=0;i<3;i++){
        stuarr[i].marks = stuarr[i].marks-10;
    }
}

void display (struct student stu){
    printf("Name - %s\t",stu.name);
    printf("Rollno - %d\t",stu.rollno);
    printf("Marks - %d\n",stu.marks);
}