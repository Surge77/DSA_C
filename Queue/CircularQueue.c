#include<stdio.h>
#define size 5
int A[size];
int rear=size-1;
int front =size-1;

void enq()
{
	int x;
	if(fullQ())
	{
		printf("Queue is full\n");
		return;
	}
	else
	{
		printf("Enter an element:\n");
		scanf("%d",&x);
	if(rear==size-1)
	{
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	A[rear]=x;
	
	}
}

void deq()
{
	int x;
	if(front==rear)
	{
		printf("Queue is empty\n");
		return;
	}
	else
	{
		if(front==size-1)
		{
			front =0;
		}
		else
		{
			front = front+1;
		}
		x=A[front];
		printf("Dequeued element is %d\n",x);
	}
}
int fullQ()
{
	int t;
	t=rear;
	if(t==size-1)
	{
		t=0;
	}
	else
	{
		t=t+1;
	}
	if(t==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void display()
{
	int i;
	if(rear==front)
	{
		printf("Queue is empty\n");
		return;
	}
	else
	{
		i=front;
		if(i==size-1)
		{
			i=0;
		}
		else
		{
			i=i+1;
		}
		while(i!=rear)
		{
			printf("%d\n",A[i]);
			if(i==size-1)
			{
				i=0;
			}
			else
			{
				i=i+1;
			}
		}
		printf("%d\n",A[i]);
	}
}

int main()
{
	int ch;
	printf("Enter choice:");
	do
	{
		printf("1:enqueue 2:dequeue 3:display 4:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enq(); break;
			case 2: deq(); break;
			case 3: display(); break;
		}
	}while(ch!=4);
}