#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Program to understand how a pointer variable is sent to a function

*/

struct student{

    char name[20];
    int rollno;
    int marks;

};

void display(struct student *);
void inc_marks(struct student *);

int main(){

    struct student stu1 = {"oliver",25,68};
    struct student stu2 = {"Mary",18,89};
    inc_marks(&stu1);
    inc_marks(&stu2);
    display(&stu1);
    display(&stu2);
    
    
}

void inc_marks(struct student *stuptr){

    (stuptr->marks)++;
}

void display(struct student *stuptr){

    printf("Name - %s\t",stuptr->name);
    printf("Rollno - %d\t",stuptr->rollno);
    printf("Marks - %d\t",stuptr->marks);

}