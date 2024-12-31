/*

Some implementations pass a pointer to pointer parameter to allow changing the head pointer directly instead of returning the new one. Thus you could write:

- note that there's no return value: it's not needed

void push(struct node** head, int data)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=*head;
    *head = newnode; // *head stores the newnode in the head
}

--and call like this:
push(&head,1);

---------------------------------------------------------------------------------------------------------------------------------------------------

The implementation that doesn't take a pointer to the head pointer must return the new head, and the caller is responsible for updating it itself:

struct node* push(struct node* head, int data)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    return newnode;
}

-note the assignment of the result to the head pointer
head = push(head,1);
If you don't do this assignment when calling this function, you will be leaking the nodes you allocate with malloc, and the head pointer will always point to the same node.

The advantage should be clear now: with the second, if the caller forgets to assign the returned node to the head pointer, bad things will happen.

Edit:

Pointer to pointer(Double pointers) also allows for creation for multiple user defined data types within a same program(Example: Creating 2 linked lists)

*/