//Program of reversing a string using stack

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

int top = -1;
char stack[MAX];
char pop();
void push(char);

int main(){
    char str[20];
    unsigned int i;
    printf("Enter a string : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        push(str[i]);
    }
    //Pop characters from the stack and store in string str
    for(i=0;i<strlen(str);i++){
        str[i]=pop();
    }
    printf("Reversed string is : ");
    puts(str);
    return 0;

} //End of main()

void push(char item){
    if(top==MAX-1){
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top]=item;
    //This is an alternative way of writing 

    // else{
    //     top++;
    //     stack[top]=item;
    // }
} //End of push()

char pop(){
    if(top==-1){
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
} //End of pop()