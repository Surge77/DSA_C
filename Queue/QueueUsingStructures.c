#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void enq(struct node **front,struct node **rear)
{
	struct node *new;
	int x;
	printf("\nEnter element: ");
	scanf("%d",&x);
	new=(struct node *)malloc(sizeof(struct node));
	new->data=x;
	new->next=NULL;
	
	if(*front==NULL&&*rear==NULL)
	{
		*front=new;
		*rear=new;
		return;
	}
	else
	{
		(*rear)->next=new;
		*rear=new;
	}
}

void deq(struct node **front,struct node **rear)
{
	struct node *temp;
	if(*front==NULL&&*rear==NULL)
	{
		printf("\nQueue is empty\n");
		return;
	}
	else{
		temp=*front;
		*front=(*front)->next;
		printf("\nDequeued element is %d",temp->data);
		if(*front==NULL)
		{
			*rear=NULL;
		}
		free (temp);
	}
}

void display(struct node *front)
{
	struct node *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}


int main()
{
	struct node *front=NULL,*rear=NULL;
	printf("\n1:ENQ 2:DEQ 3:DISPLAY 4:EXIT\n");
	int ch;
	do{
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enq(&front,&rear);break;
			case 2: deq(&front,&rear);break;
			case 3: display(front);
		}
	}while(ch!=4);
}