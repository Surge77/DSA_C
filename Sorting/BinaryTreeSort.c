/*
Binary tree sort uses a binary tree for sorting the data.This algorithm proceeds in two phases,namely construction phase and travel phase.

1.Construction phase:A binary tree is created from the given data
2.Traversal phase: The binary search tree created is traversed in inorder to obtain the sorted data
*/

//program to sort an array using binary tree sort

#include<stdio.h>
#define MAX 100 
#include<stdlib.h>

struct node
{
	int info;
	struct node *lchild;
	struct node *rchild;
};
struct node*stack[MAX];
int top=-1;
void push_stack(struct node *item);
struct node *pop_stack();
int stack_empty();
struct node*insert(struct node *ptr,int item);
void inorder(struct node *ptr,int arr[]);
struct node *destroy(struct node *ptr);

int main()
{
    int n,i,arr[MAX];
    struct node *root=NULL;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
        root=insert(root,arr[i]);
    }
    inorder(root,arr);
    printf("\nSorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    root=destroy(root);
    return 0;
} //End of main()

struct node *insert(struct node *root,int ikey)
{
    struct node *tmp,*par,*ptr;
    ptr = root;
    par = NULL;
    while(ptr!=NULL)
    {
        par = ptr;
        if(ikey<ptr->info)
        {
            ptr = ptr->lchild;
        }
        else
        {
            ptr = ptr->rchild;
        }
    }
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->info = ikey;
    tmp->lchild = tmp->rchild = NULL;
    if(par==NULL)
    {
        root = tmp;
    }
    else if(ikey<par->info)
    {
        par->lchild = tmp;
    }
    else
    {
        par->rchild = tmp;
    }
    return root;    
} //End of insert()

void inorder(struct node *root,int arr[])
{
    struct node *ptr;
    int i = 0;
    ptr = root;
    if (ptr==NULL)
    {
        printf("Tree is empty");
        return;
    }
    while(1)
    {
        while (ptr->lchild!= NULL)
        {
            push_stack(ptr);
            ptr = ptr->lchild;
        }
        while(ptr->rchild==NULL)
        {
            arr[i++] = ptr->info;
            if(stack_empty())
            {
                return;
            }
            ptr = pop_stack();
        }
        arr[i++] = ptr->info;
        ptr = ptr->rchild;
    }
} //End of inorder()

//Delete all the nodes of the tree
struct node *destroy(struct node *ptr)
{
    if(ptr!=NULL)
    {
        destroy(ptr->lchild);
        destroy(ptr->rchild);
        free(ptr);
    }
    return NULL;
} //End of destroy()

void push_stack(struct node *item)
{
    if(top==(MAX-1))
    {
        printf("Stack is overflow");
        return;
    }
    stack[++top] = item;
} //End of push_stack()

struct node *pop_stack()
{
    struct node *item;
    if(top==-1)
    {
        printf("Stack is underflow");
        exit(1);
    }
    return stack[top--];
    return item;
} //End of pop_stack()

int stack_empty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
} //End of stack_empty()
