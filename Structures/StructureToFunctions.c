#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Program to understand how structure members are sent to a function

Here we have passed members of the variables stu1,stu2 to the function display().We can pass the arguments using call by reference also so that
the changes made in the called function will be reflected in the calling function

*/

struct student{

    char name[20];
    int rollno;
    int marks;

};

void display(char name[], int rollno, int marks);

int main(){

    struct student stu1 = {"oliver",25,68};
    struct student stu2;
    strcpy(stu2.name,"Mary");
    stu2.rollno = 18;
    stu2.marks = 90;

    display(stu1.name,stu1.rollno,stu1.marks);
    display(stu2.name,stu2.rollno,stu2.marks);
}

void display(char name[], int rollno, int marks){

    printf("Name - %s\t",name);
    printf("Rollno - %d\t",rollno);
    printf("Marks - %d\t",marks);

}