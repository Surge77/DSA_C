#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void push(struct node **top)
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	int x;
	printf("\nEnter element: ");
	scanf("%d",&x);
	new->data=x;
	new->next=NULL;

	if(*top==NULL)
	{
		*top = new;
		return;
	}
	else{
		new->next=*top;
		*top = new;
	}
}

void pop(struct node **top)
{
	int x;
	if(*top==NULL)
	{
		printf("\nStack is empty\n");
	}
	
	else{
		x=(*top)->data;
		*top=(*top)->next;
		printf("\nPopped element %d\n",x);
	}
}

void display(struct node *top)
{
	struct node *dis;
	dis=top;
	while(dis!=NULL)
	{
		printf("%d ",dis->data);
		dis=dis->next;
	}
}

main()
{
	struct node *top = NULL;
	int ch;
	printf("\n1:PUSH 2:POP 3:DISPLAY 4:EXIT\n");
	do{
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push(&top); break;
			case 2: pop(&top); break;
			case 3: display(top);break;
		}
	}while(ch!=4);
}