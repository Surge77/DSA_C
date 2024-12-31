//Program of sorted linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *insert_s(struct node*start,int data);
void display(struct node *start);
void search(struct node *start,int data);

int main()
{
    struct node *start=NULL;
    int choice,data;
    while(1)
    {
        printf("\n1.Insert\n");
        printf("2.Display\n");
        printf("3.Search\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Input the element to be inserted : ");
                scanf("%d",&data);
                start=insert_s(start,data);
                break;
            case 2:
                display(start);
                break;
            case 3:
                printf("Input the element to be searched : ");
                scanf("%d",&data);
                search(start,data);
                break;
            case 4:
                exit(1);
            default:
                printf("Wrong choice\n");
        } //End of switch
    } //End of while
} //End of main()


struct node *insert_s(struct node*start,int data)
{
    struct node *tmp,*p;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    //list empty or new node to be added before first node
    if(start==NULL || data<start->info)
    {
        tmp->link=start;
        start=tmp;
        return start;
    }
    else
    {
        p=start;
        while(p->link!=NULL && p->link->info<data)
        {
            p=p->link;
        }
        tmp->link=p->link;
        p->link=tmp;
    }
    return start;
} //End of insert_s()


void display(struct node *start)
{
    struct node *q;
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    q=start;
    printf("List is : ");
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q=q->link;
    }
    printf("\n");
} //End of display()


void search(struct node *start,int data)
{
    struct node *p;
    int pos;
    if (start==NULL || data < start->info)
    {
        printf("%d not found\n",data);
        return;
    }
    p=start;
    pos = 1;
    while(p!=NULL && p->info<data)
    {
        if(p->info == data)
        {
            printf("%d found at position %d\n",data,pos);
            return;
        }
        p=p->link;
        pos++;
    }
    printf("%d not found\n",data);

} //End of search()
