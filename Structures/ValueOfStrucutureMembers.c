#include<stdio.h>
#include<string.h>

/*
In this program we have declared three variables of type struct student.The first variable stu1 have been initialized,the members of second
variable stu2 are given values using separate statements and the value for third variable stu3 are input by the user

The dot operator is one of the highest precedence operators,its associativity is from left to right.Hence will take precedence over all other
unary,relational,logical,arithmetic and assigment operators.so in an expresion like ++stu.marks,first stu.marks will be accessed and then its value will
be increased by 1
*/

struct student{

    char name[20];
    int rollno;
    float marks;

};

int main(){
    struct student stu1 = {"Mary",25,68};
    struct student stu2,stu3;
    strcpy(stu2.name,"John");
    stu2.rollno = 26;
    stu2.marks = 98;
    printf("Enter name,roll no and marks for stu3: ");
    scanf("%s %d %f",&stu3.name,&stu3.rollno,&stu3.marks);
    printf("Stu1 : %s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("Stu2 : %s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
    printf("Stu3 : %s %d %.2f\n",stu3.name,stu3.rollno,stu3.marks);
}