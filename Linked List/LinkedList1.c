#include <stdio.h>
#include <stdlib.h>

struct node{  //This structure represents a single node 
	int data;
	struct node *next;
};

void insert(struct node **list){ //This is insertion at the end
	
	struct node *new,*temp;
	new = (struct node *)malloc(sizeof(struct node));
	int x;
	printf("Enter an element: ");
	scanf("%d",&x);
	new->data=x;
	new->next=NULL;
	
	if(*list==NULL){ //If list is empty then insert it at first position as there are no elements in list it will be inserted afer head 
		*list = new;
		return ;
	}
	else{ // If the list is not empty then we traverse till the end of list then insert the new node at the end
		temp=*list; // here we stored the head pointer in the temp so that we don't lose the access of head as it is the only way to access the list
		while(temp->next!=NULL)
		{
			temp=temp->next; 
		}
		temp->next=new;
	}
}

//Function for displaying the data in linked list
void display(struct node *list){

	struct node *temp=list;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp = temp->next;
	}
}

void rev(struct node *list){ 

	if(list!=NULL){
		rev(list->next);
		printf("%d",list->data); // Here the data element gets printed in the unwinding phase
	}
}

int main(){
	struct node *list=NULL; //List or  we can say head of list
	printf("\n1:Insert 2:Display 3:Reverse 4:Exit\n");
	int ch;
	do{
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		
		switch(ch){
			case 1: insert(&list); break;
			case 2: display(list); break;
			case 3: rev(list); break;
		}
	}while(ch!=4);
}