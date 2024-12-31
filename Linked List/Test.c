#include <stdio.h>
#include <stdlib.h>

//this is merging two sorted linked list

struct node
{
    int info;   
    struct node *link;
};

struct node *create(struct node*start);
struct node *insert_s(struct node*start,int data);
struct node *insert(struct node*start,int data);
void display(struct node *start);
void merge(struct node *p1,struct node *p2);

int main()
{
    struct node *start1=NULL,*start2=NULL;
    start1=create(start1);
    start2=create(start2);
    printf("List1 : "); display(start1);
    printf("List2 : "); display(start2);
    merge(start1,start2);
    return 0;
}

void merge(struct node *p1,struct node *p2)
{
    struct node *start3=NULL;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->info < p2->info)
        {
            start3=insert_s(start3,p1->info);
            p1=p1->link;
        }
        else
        {
            start3=insert_s(start3,p2->info);
            p2=p2->link;
        }
    }
    while(p1!=NULL)
    {
        start3=insert_s(start3,p1->info);
        p1=p1->link;
    }
    while(p2!=NULL)
    {
        start3=insert_s(start3,p2->info);
        p2=p2->link;
    }
    printf("Merged List is: ");
    display(start3);
}

struct node* create(struct node*start)
{
    int i,n,data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    start = NULL;
    for(i=0;i<n;i++)
    {
        printf("Enter the element to be inserted : ");
        scanf("%d",&data);
        start=insert(start,data);
    }
    return start;
}

struct node *insert_s(struct node*start,int data)
{
    struct node *tmp,*p;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
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
}

struct node *insert(struct node*start,int data)
{
    struct node *tmp,*p;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    if(start==NULL)
    {
        tmp->link=NULL;
        start=tmp;
        return start;
    }
    else
    {
        p=start;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        tmp->link=p->link;
        p->link = tmp;
    }
    return start;
}

void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    p=start;
    printf("List is : ");
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->link;
    }
    printf("\n");
}
