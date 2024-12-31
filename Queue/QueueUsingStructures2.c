#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void enq(struct node **f,struct node **r)
{
	int x;
	struct node *new;
	printf("Enter element to enqueue : ");
	scanf("%d",&x);
	new=(struct node *)malloc(sizeof(struct node));
	new->data=x;
	new->next=NULL;
	if(*f==NULL && *r==NULL)
	{
		*f=new;
		*r=new;
		return;	
	}
	else
	{
		(*r)->next=new;
		*r=new;	
	}
}

void deq(struct node **f,struct node **r)
{
	struct node *temp;
	if(*f==NULL && *r==NULL)
	{
		printf("Queue is empty!!");
		return;
	}
	else
	{
		temp=*f;
		*f=(*f)->next;
		printf("Dequeued element is %d",temp->data);
	}
	if(*f==NULL)
	{
		*r=NULL;
	}
	free(temp);
}

void display(struct node *f)
{
	struct node *temp;
	temp=f;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;	
	}	
}

int main()
{
	struct node *front=NULL,*rear=NULL;
	int ch;
	do
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enq(&front,&rear);break;
			case 2:deq(&front,&rear);break;
			case 3:display(front);break;
		}
	}while(ch!=4);
}