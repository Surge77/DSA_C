#include<stdio.h>

/*
Program to understand how a structure variable is sent to a function

Here it is neccessary to define the structure tempplate globally because it is used by both function to declare variables

The name of a structure variable is not a pointer unlike arrays,so when we send a structure variable as a argument to a function,a copy of the 
whole structure is made inside the called function and all the work is done on that copy,Any changes made inside the called function are not 
visible in the calling function since we only working on a copy of the structure variable,not on the actual structure variable.
*/


struct student{

    char name[20];
    int rollno;
    int marks;

};

void display(struct student);

int main(){

    struct student stu1 = {"oliver",25,68};
    struct student stu2 = {"Mary",18,89};
    display(stu1);
    display(stu2);
    
    
}

void display(struct student stu){

    printf("Name - %s\t",stu.name);
    printf("Rollno - %d\t",stu.rollno);
    printf("Marks - %d\t",stu.marks);

}