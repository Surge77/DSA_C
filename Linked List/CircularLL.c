#include<stdio.h>
#include <stdlib.h>

//In circular LL the last element is having the link of first element in the list

struct node
{
	int data;
	struct node *next;
};

void insert(struct node **list)
{
	struct node *new,*temp;
	int x;
	printf("Enter an element: ");
	scanf("%d",&x);
	new=(struct node *)malloc(sizeof(struct node));
	new->data=x;
	new->next=NULL;
	if(*list==NULL){
		*list=new;
		(*list)->next=*list;
		return;
	}
	else{
		temp=*list;
		while(temp->next=*list)
		{
			temp=temp->next;
		}
		temp->next=new;
		new->next=*list;
	}
}

void dekt(struct node **list)
{
	struct node *t,*c;
	int x;
	printf("Enter x of node to be deleted: ");
	scanf("%d",&x);
	if(*list==NULL)
	{
		printf("List is empty\n");
		return;
	}
	else{
		if((*list)->next==*list&&x==(*list)->data)
		{
			*list=NULL;
			return ;
		}
	else{
		if(x==(*list)->data){
			t=NULL;
			c=*list;
			while(c->next!=(*list))
			{
				t=c;
				c=c->next;
			}
		
		*list=(*list)->next;
		c->next=*list;
	}
	else{
		t=NULL;
		c=*list;
		while(c->next!=*list&&c!=c->next)
		{
			t=c;
			c=c->next;
		}
	}
	if(x==c->data){
		t->next=c->next;
	}
	else{
		printf("Node not found\n");
	}

	
	}			
 }	
 }
	


void display(struct node *list)
{
	struct node *t;
	t=list;
	if(list==NULL){
		printf("List is empty\n");
	}
	else
	{
		while(t->next=list)
		{
			printf("%d ",t->data);
			t=t->next;
		}
		printf("%d ",t->data);
	}
}

int main()
{
	
	struct node *list=NULL;
	printf("1:insert 2:delete 3:display\n");                         
	int ch;
	do
	{
		printf("Enter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(&list);break;
			case 2: dekt(&list);break;
			case 3:display(list);break;
			
		}
	}while(ch!=4);
}