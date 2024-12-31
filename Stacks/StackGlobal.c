#include <stdio.h>
#define size 5
int A[size];
int top=-1;

void push()
{
    int x;
    if(top==size-1)
    {
        printf("Stack is full");
        return;
    }
    else
    {
        printf("Enter an element:");
        scanf("%d",&x);
        top = top+1;
        A[top]=x;
    }


}

void pop()
{
    int x;
    if(top==-1)
    {
        printf("Stack is empty");
        return;
    }
    else{
            x=A[top];
            top=top-1;
    printf("Popped element=%d",x);
    }
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",A[i]);
    }

}
void add()
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }

}

int main()
{
    int ch;
    do{
        printf("1:push 2:pop 3:display 4:add 5:exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: add(); break;

        }

    }while(ch!=5);
}