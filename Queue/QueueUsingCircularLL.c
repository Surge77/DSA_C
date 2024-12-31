//Program of queue using circular linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *rear = NULL;

void insert(int item);
int del();
int peek();
int isEmpty();
void display();

int main()
{
    int choice,item;
    while(1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Input the element for insertion in queue : ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                printf("Element deleted from queue is : %d\n",del());
                break;
            case 3:
                printf("Element at the front of the queue is : %d\n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default :
                printf("Wrong choice\n");
        } //End of switch
    } //End of while
} //End of main()

void insert(int item)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    if(tmp==NULL)
    {
        printf("Memory not available\n");
        return;
    }
    tmp->info = item;
    if (isEmpty()) //If queue is empty
    {
        rear = tmp;
        tmp->link = rear;
    }
    else
    {
        tmp->link = rear->link;
        rear->link = tmp;
        rear = tmp;
    }
} //End of insert()

int del()
{
    int item;
    struct node *tmp;
    if(isEmpty())
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    if(rear->link == rear) //If only one element in queue
    {
        tmp = rear;
        rear = NULL;
    }
    else
    {
        tmp = rear->link;
        rear->link = rear->link->link;
    }
    item = tmp->info;
    free(tmp);
    return item;

}  //End of del()

int peek()
{
    if(isEmpty())
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    return rear->link->info;
} //End of peek()

int isEmpty()
{
    if(rear==NULL)
        return 1;
    else
        return 0;
} //End of isEmpty()

void display()
{
    struct node *p;
    if(isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is : \n");
    p = rear->link;
    do
    {
        printf("%d ",p->info);
        p = p->link;
    } while(p != rear->link);
    printf("\n");

} //End of display()
