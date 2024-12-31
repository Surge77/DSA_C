#include<stdio.h>
#define size 5
struct stack
{
    int A[size];
    int Top;
    int E[size];
    int O[size];
};

void push(struct stack *p)
{
    int x;
    if(p->Top==size-1)
    {
        printf("\n-------STACK IS FULL--------");
        return;
    }
    else
    {
        printf("\nEnter an element to add : ");
        scanf("%d",&x);
        p->Top=p->Top+1;
        p->A[p->Top]=x;
    }
}

void pop(struct stack *p)
{
    int x;
    if(p->Top==-1)
    {
        printf("\n-------STACK IS EMPTY-------");
        return;
    }
    else
    {
        x=p->A[p->Top];
        p->Top=p->Top-1;
        printf("\nElement removed = %d ",x);
    }
}

void display(struct stack *p)
{
    int i;
    for(i=0;i<=p->Top;i++)
    {
        printf("%d\n",p->A[i]);
    }
}

int sum(struct stack *p)
{
    int i;
    int t=0;
    for(i=0;i<=p->Top;i++)
    {
        t=t+p->A[i];
    }
    printf("\nTOTAL SUM = %d",t);
}

void separate(struct stack *p)
{
    int i;
    for(i=0;i<=p->Top;i++)
    {
        if(p->A[i]%2==0)
        {
            p->E[i]=p->A[i];
            p->O[i]=0;
        }
        else
        {
            p->O[i]=p->A[i];
            p->E[i]=0;
        }
    }
    printf("\n-------\nEVEN------- :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",p->E[i]);
    }

    printf("\n-------\nODD------- :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",p->O[i]);
    }
}

void reverse(struct stack *p)
{
    int i;
    for(i=p->Top;i>=0;i--)
    {
        printf("%d\n",p->A[i]);
    }
}

int main()
{
    struct stack s;
    s.Top=-1;
    int ch;
    do
    {
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Sum\n5.Separate\n6.Reverse\n7.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{push(&s);break;}
            case 2:{pop(&s);break;}
            case 3:{display(&s);break;}
            case 4:{sum(&s);break;}
            case 5:{separate(&s);break;}
            case 6:{reverse(&s);break;}
        }
    }while(ch!=7);
}