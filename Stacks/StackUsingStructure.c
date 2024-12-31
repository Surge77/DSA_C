#include <stdio.h>
#define size 5
struct stack
{
	int A[size];
	int top;
};

void push(struct stack *p)
{
    int x;
    if(p->top==size-1)
    {
        printf("Stack is full");
        return;
    }
    else
    {
        printf("Enter an element:");
        scanf("%d",&x);
        p->top =p->top+1;
        p->A[p->top]=x;
    }


} //End of push()

void pop(struct stack *p)
{
    int x;
    if(p->top==-1)
    {
        printf("Stack is empty");
        return;
    }
    else{
            x=p->A[p->top];
            p->top=p->top-1;
    printf("Popped element=%d",x);
    }
} //End of pop()

void display(struct stack *p)
{
    int i;
    printf("\nElements in stack: \n");
    for(i=0;i<=p->top;i++)
    {
        printf("%d\n",p->A[i]);
    }

} //End of display()


int main()
{
	struct stack s;
	s.top=-1;
    int ch;
    do{
        printf("\n1:push 2:pop 3:display 4:exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push(&s); break;
            case 2: pop(&s); break;
            case 3: display(&s); break;

        }

    }while(ch!=4);
} //End of main()