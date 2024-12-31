#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Program to understand how a pointer to structure is returned from a function

Pointers to structure can also be returned from function
*/

struct student{

    char name[20];
    int rollno;
    int marks;

};

void display(struct student *);
struct student *fun();
struct student *ptr;

int main(){

    struct student *stuptr;
    stuptr = fun();
    display(stuptr);
    free(stuptr);
}
struct student *fun(){

    ptr = (struct student *) malloc(sizeof(struct student));
    strcpy(ptr->name,"joseph");
    ptr->rollno = 15;
    ptr->marks = 98;
    return ptr;
}
void display(struct student *stuptr){

    printf("Name - %s\t",stuptr->name);
    printf("rollno - %s\t",stuptr->rollno);
    printf("marks - %s\n",stuptr->marks);

}