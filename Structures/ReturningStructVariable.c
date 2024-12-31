#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Program to understand how a structure variable is returned from a function

xtructure variables can be returned from functions as any other variable.The returned value can be assigned to a structure to appropriate type


*/

struct student{

    char name[20];
    int rollno;
    int marks;

};

void display(struct student );
struct student change(struct student stu);

int main(){

    struct student stu1 = {"oliver",25,68};
    struct student stu2 = {"Mary",18,89};
    stu1 = change(stu1);
    stu2 = change(stu2);
    display(stu1);
    display(stu2);
    
    
}

struct student change(struct student stu){
    stu.marks = stu.marks + 5;
    stu.rollno = stu.rollno - 10;
    return stu;
}

void display(struct student stu){

    printf("Name - %s\t",stu.name);
    printf("Rollno - %d\t",stu.rollno);
    printf("Marks - %d\t",stu.marks);

}