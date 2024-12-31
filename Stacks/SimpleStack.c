#include<stdio.h>
#define size 5
int A[size];
int Top=-1;

void push()
{
    int x;
    if(Top==size-1)
    {
        printf("\n-------STACK IS FULL--------");
        return;
    }
    else
    {
        printf("Enter an element to add : ");
        scanf("%d",&x);
        Top=Top+1;
        A[Top]=x;
    }
}

void pop()
{
    int x;
    if(Top==-1)
    {
        printf("\n-------STACK IS EMPTY-------");
        return;
    }
    else
    {
        x=A[Top];
        Top=Top-1;
        printf("\nElement removed = %d ",x);
    }
}

void display()
{
    int i;
    for(i=0;i<=Top;i++)
    {
        printf("%d\n",A[i]);
    }
}

int main()
{
    int ch;
    do
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{push();break;}
            case 2:{pop();break;}
            case 3:{display();break;}
        }
    }while(ch!=4);
}