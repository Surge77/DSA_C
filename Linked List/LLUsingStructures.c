#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

void insert(struct node **list)
{
	int x;
	struct node *new , *p;
	new=(struct node *)malloc(sizeof(struct node));
	
	printf("\nEnter element: \n");
	scanf("%d",&x);
	new->data=x;
	new->next=NULL;
	if(*list==NULL)
	{
		*list = new;
		return;
	}
	else
	{
		p=*list;
		while(p->next!=NULL)
		{
			p=p->next;
		}	
		p->next=new;
	}
}


void delete(struct node **list) // Deleting the node from position with the help of data element
{
struct node *T,*c;
int x;
if(*list==NULL) //If there are no elements in list we cannot delete anything
{
	printf("\nList is empty\n");
	return;
}
else{
	printf("\nEnter the data of node to be deleted\n");
	scanf("%d",&x);
	if(x==(*list)->data)
	{
		*list=(*list)->next;
		return;
	}
	else{
		T=NULL;
		c=*list;
		while(c!=NULL && x!=c->data)
		{
			T=c;
			c=c->next;
		}
		if(c==NULL)
		{
			printf("\nNode not found\n");
			return;
		}
		else{
			T->next=c->next;
			free(c);
		}
	}
}
	
}

void search(struct node *list)
{
	struct node *p;
	int x;
	if(list==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	else{
		printf("\nEnter x of node to be searched: \n");
		scanf("%d",&x);
		p=list;
		while(p!=NULL&&x!=p->data)
		{
			p=p->next;
		}
		if(p==NULL)
		{
			printf("\nNode not found\n");
		}
		else{
			printf("\nNode found\n");
		}
	}
} 

void display(struct node *list)
{
	struct node *p;
	if(list==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	else{
		p=list;
		while(p!=NULL)
		{
			printf("%d ",p->data);
			p=p->next;
		}
	}
}
void count(struct node *list)
{
	struct node *p;
	int count= 0;
	if(list==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	else{
		p=list;
		while(p!=NULL)
		{
		count = count+1;
		p=p->next;	
		}
		printf("\nNo. of nodes=%d\n",count);
	}
}

int main()
{
	struct node *list=NULL;
	int ch;
	printf("\nEnter choice:\n");
	do
	{
		printf("\n1:insert 2:delete 3:display 4:count 5:search 6:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(&list); break;
			case 2: delete(&list); break;
			case 3: display(list); break;
			case 4: count(list); break;
			case 5: search(list); break;
		}
	}while(ch!=6);
}