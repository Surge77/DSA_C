#include<stdio.h>
#include<stdlib.h>
#define MAX 10

//Program of stack using array

int stack_arr[MAX];
int top = -1;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

int main(){
    int choice,item;
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display the top element\n");
        printf("4.Display all stack elements\n");
        printf("5.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the item to be pushed: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item = pop();
                printf("popped item is : %d\n",item);
                break;
            case 3:
                printf("Item at the top is : %d\n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("Wrong choice\n");
        } //ENd of switch
    } //End of while
} //ENd of main()

void push(int item)
{
    if(isFull())
    {
        printf("Stack overflow\n");
        return;
    }
    top = top+1;
    stack_arr[top] = item;
} //ENd of push()

int pop()
{
    int item;
    if(isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    item = stack_arr[top];
    top = top-1;
    return item;
} //End of pop

int peek()
{
    if(isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
} //ENd of peek()

int isEmpty()
{
    if (top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
} //End of isempty()

int isFull()
{
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}//End of isFull()

void display(){
    int i;
    if(isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    printf("stack elements : \n\n");
    for(i=top; i>=0; i--){
        printf("%d\n",stack_arr[i]);
    }
    printf("\n");
} //End of display()