//Program of priority queue using linked list

//The priority queue that we have used below is max-priority queue or descending priority queue.
//A descending priority queue arranges elements by priority value in descending order, with the highest priority item being dequeued first.
//The other queue is min-priority queue or ascending priority queue in which the lowest priority item is dequeued first.
//An ascending order priority queue arranges elements based on their priority values in ascending order. i.e smaller to bigger

#include <stdio.h>
#include <stdlib.h> 
struct node
{
    int priority;
    int info;
    struct node *link;
} *front = NULL;
void insert(int item, int item_priority);
int del();
int display();
int isEmpty();

int main()
{
    int choice, item, priority;
    while (1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the element to be added in the queue: ");
            scanf("%d", &item);
            printf("Enter its priority: ");
            scanf("%d", &priority);
            insert(item, priority);
            break;
        case 2:
            printf("Deleted item is %d\n", del());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice\n");
        } //End of switch
    } //End of while 
} //End of main()

void insert(int item, int item_priority)
{
    struct node *tmp, *p;
    tmp = (struct node *)malloc(sizeof(struct node));
    if(tmp == NULL)
    {
        printf("Memory not available\n");
        return;
    }
    tmp->info = item;
    tmp->priority = item_priority;
    //Queue is empty or item to be added has priority more than first element
    if ((isEmpty() || item_priority > front->priority))
    {
        tmp->link = front;
        front = tmp;
    }
    else
    {
        p = front;
        while (p->link != NULL && p->link->priority <= item_priority)
        {
            p = p->link;
        }
        tmp->link = p->link;
        p->link = tmp;
    }
} //End of insert()

int del()
{
    int item;
    struct node *tmp;
    if (isEmpty())
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        tmp = front;
        item = tmp->info;
        front = front->link;
        free(tmp);
    }
    return item;
} //End of del()

int display(){

    struct node *ptr;
    ptr = front;
    if (isEmpty())
    {
        printf("Queue is empty\n");
    }else{
        printf("Queue is : \n");
        printf("priority queue is \n");
        while (ptr != NULL)
        {
            printf("%d ", ptr->info);
            ptr = ptr->link;
        }
        printf("\n");
    }
} //End of display()

int isEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
} //End of isEmpty()