#include<stdio.h>
#include<stdlib.h>

//Reversing the linked list using recursive method

struct node
{
	int data;
	struct node*next;
};


void insert(struct node**list) //Inserting at the end
{
	struct node*new,*temp;
	int x;
	printf("enter an element:\n");
	scanf("%d",&x);
	new=(struct node*)malloc(sizeof(struct node));
	new->data=x;
	new->next=NULL;
	if(*list==NULL)
	{
		*list=new;
		return;
	}
	else
	{
		temp=*list;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new;
	}
}
void display(struct node*list)
{
	struct node*temp=list;
	
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void rev(struct node*list)
{
	if(list!=NULL)
	{
		rev(list->next);
		printf("%d ",list->data);
	}
}
int main()
{
	struct node*list=NULL;
	int ch;
	do
	{
		printf("\nenter choice:\n1:insert\n2:display\n3:rev\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert(&list);
			break;
			case 2:display(list);
			break;
			case 3:rev(list);
			break;
		}
	}while(ch!=4);
}