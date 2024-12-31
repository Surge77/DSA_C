#include<stdio.h>
#define size 5

//Elements are added from the rear and removed from the front
struct Queue
{
	int A[size];
	int rear,front;
};


void enq(struct Queue *p)
{
	int x;
	if(p->rear==size-1)
	{
		printf("Queue is full\n");
		return;
	}
	else
	{
		printf("Enter an element:\n");
		scanf("%d",&x);
		p->rear=p->rear+1;
		p->A[p->rear]=x;
	}
}

void deq(struct Queue *p)
{
	int x;
	if(p->front>p->rear)
	{
		printf("Queue is empty\n");
		return;
	}
	else
	{
		x=p->A[p->front];
		p->front=p->front+1;
		printf("Dequeued element is %d\n",x);
	}
}

void display(struct Queue *p)
{
	int i;
	for(i=p->front;i<=p->rear;i++)
	{
		printf("%d\n",p->A[i]);
	}
}

int main()
{
	struct Queue s;
	s.rear=-1;
	s.front=0;
	int ch;
	printf("Enter choice:\n");
	do
	{
		printf("1:enqueue 2:dequeue 3:display 4:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enq(&s); break;
			case 2: deq(&s); break;
			case 3: display(&s); break;
		}
	}while(ch!=4);
}