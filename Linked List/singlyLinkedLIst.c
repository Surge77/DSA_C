#include<stdio.h>
#include<stdlib.h>

//Program of singly linked list

struct node
{
    int info;
    struct node *link;

};

struct node *create_list(struct node *start)
{
    /*
    A list can be created using the insertion opertions.First time we will have to insert into an empty list and then we will keep on inserting nodes
    at the end of the list.The case of insetion in an empty list reduces to the cases of insertion in the beginning,so for inserting the first node we will
    call addatbeg() , and then for insertion for all other nodes we will call addatend()
    */
    int i,n,data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    start = NULL;
    if (n==0){
        return start;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d",&data);
    start = addatbeg(start,data);
    for (i=2;i<=n;i++)
    {
        printf("Enter the element to be inserted: ");
        scanf("%d",&data);
        start = addatend(start,data);
    }
    return start;
} //End of create_list()

// -------------------------------------------------------------------------------------------------------------------------------------

void display(struct node *start){

    /*
    We will take a structure pointer p which will point to the node that is currently being visited.Initially we have to visit the first node 
    so p is assigned the value of start.Now p points to the first node of linked list.We can access the info part of first node by writing p->info.
    Now we have to shift the pointer p forward so that it points to next node.This can be done by assigning the address of next node to p as
    p = p->link;

    The following function display() displays the contents of the linked list

    Don't think of using start for moving forward.If we use start = start->link,instead of p = p->link then we will lose start that is the only 
    means of accsessing our list.

    */

    struct node *p;
    if (start == NULL){
        printf("List is empty\n");
        return;
    }
    else{
        p = start;
        printf("List is : \n");
        while ( p != NULL){
            printf("%d ",p->info);
            p = p->link; //used to move forward
        }
        printf("\n\n");

    } //End of display()

// ---------------------------------------------------------------------------------------------------------------------------------

}
void count(struct node *start)
{
    /*
    The following function count() finds out the number of elements of the linked list
    */

   struct node *p;
    int cnt=0;
    p = start;
    while (p!=NULL)
    {
    p = p->link; //used to move forward
    cnt++;
    }
    printf("Number of elements are %d\n",cnt);

} //End of count()

// -----------------------------------------------------------------------------------------------------------------------------------------------Pp

void search(struct node*start,int item)
{
    /*
    For searching an element, we traverse the linked list and while traversing we compare the info part of each element with the given element to be searched.
    In the function item is the  element which we want to search
    */
    struct node *p = start;
    int pos = 1;
    while (p!= NULL)
    {
        if (p->info == item){
            printf("Item %d found at position %d\n",item,pos);
        }
        else
        {
            p = p->link;
            pos++;
        }
    }
    printf("Item %d not found in the list\n",item);

} //End of search()

// ---------------------------------------------------------------------------------------------------------
/*
There can be four cases while inserting a node in a linked list

-Insertion at the beginning
-Insertion in an empty list
-Insertion at the end
-Insertion in between the nodes

To insert a node,initially we will allocate space for that node using malloc().Suppose tmp is the pointer that points to this dynamically allocated
node.In the info part of the node we will put the data value
p = (struct * node)malloc(sizeof(struct node));
info = data;

the link part of the node contains garbage value,we will address to it separately in different cases
*/
struct node *addatbeg(struct node *start,int data){

    /*
    Suppose the first node is p,so the new node T should be inserted before it
    -Link of node T should contain the address of node p,and we know that start has the address of node p so we should write
    tmp->link = start;
    After this statement link of node T will point to node p

    -We want to make node T the first node;hence we should update start so that now it points to T
    start = tmp;

    The order of the above two statements is important.First we should make linke of T equal to start and after that only we should update start.Let's 
    see what happens if the order of two statments is reversed

    start = tmp;
    start points to tmp and we lost the address of node p
    tmp->link = start;
    Link of tmp will point to itself because start has address of tmp.So if we reverse the order,then link of the node T will point to itself and we
    will stuck in an infinite loop when the lis is processed
    */
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    return start;
} //End of  addatbeg()

// ---------------------------------------------------------------------------------------------------------
/*
Insertion in an empty list

When the list is empty,value of start will be NULL.The new node that we are adding will be the only node in the list.Since it is the first node,start 
should point to this node and it is also the last node so its link should be NULL.
tmp->link = NULL;
start = tmp;

Since initially start was NULL we can write start instead of null in the first statement,So now these two statements can be written as

tmp->link = start;
start = tmp;

These two are the same
*/
struct node *addatend(struct node *start,int data)
{
    /*
    Suppose we have a pointer p pointing to the node p.These are the two statements that should be written for this insertion
    p->link = tmp;
    tmp->link = NULL;

    So in this case we should have a pointer p pointing to the last node of the list.The only information about the linked list that we have is the pointer
    start.So we will traverse the list till the end to get the pointer p and then do the insertion.This is how we obtain pointer p

    p = start;
    while(p->link!=NULL)
            p = p=>link;

    In traversal of list our terminating condition was (p!=NULL),because there we wanted the loop to terminate when p becomes NULL.Here we want the
    loop to terminate when p is pointing to the last node so the terminating condition is (p->link!=NULL)

    */

    struct node *p,*tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while(p->link!=NULL)
    {
        p = p->link;
    }
    p->link = tmp;
    tmp->link = NULL;
    return start;

}// End of addatend()

// ------------------------------------------------------------------------------------------------------------------------------------

struct node *addafter(struct node *start,int data,int item)
{ 
    /*
    In this case we are given a value from the list,and we have to insert the new node after the node that contains this value.Suppose the node p contains
    the given value,and node Q is its successor.We have to insert the new node T after node p,i.e T is to be inserted between nodes p and q.In the function
    given below data is the new value to be inserted and item is the value contained in the node p.

    Let us see what happens if item is present in the last node and we have to insert after the last node.In this case p points to last node and its link is 
    NULL.so tmp->link is automatically assigned null and we don't have any need for a special case of insertion at the end.This function will work 
    correctly even if we insert after the last node
    */

    struct node* tmp,*p;
    p = start;
    while (p!=NULL)
    {
        if (p->info ==item){
            tmp = (struct node*)malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link = p->link;
            p->link = tmp;
            return start;
        }
        p = p->link;
    }
    printf("%d  not present in the list\n",item);
    return start;


} //End of addafter()

// -----------------------------------------------------------------------------------------------------------------------------------------

struct node *addbefore(struct node *start,int data,int item)
{
    /*
    In this case we are given a value from the list,and we have to insert the new node before the node that contains its value.Suppose the node
    Q contains the given value,and node p its predecessor.We have to insert the node T before node Q, i.e T is to be inserted between nodes P and Q.
    In the given function below data is the new value to be inserted and item is the value contained in the node Q.For writing the two statements of 
    insertion (tmp->link = p->link; p->link = tmp;) we need to find the pointer p which points to the predecessor of the node that contains item.Since
    item is present in Q and we have to find pointer to node p,so here the condition for searching would be if(p->link->info == item) and terminating
    condition of the loop would be (p->link!=NULL)
    */
    struct node *tmp,*p;
    if(start == NULL)
    {
        printf("List is empyty\n");
        return start;
    }
    //If data to be inserted before first node
    if (item == start->info)
    {
        tmp = (struct node*)malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = start;
        start = tmp;
        return start;
    }
    p = start;
    while (p->link!=NULL)
    {
        if (p->link->info == item)
        {
            tmp = (struct node*)malloc(sizeof(struct node));
            tmp->info=data;
            tmp->link=p->link;
            return start;
        }
        p = p->link;
    }
    printf("%d not present in the list\n");
    return start;
}//ENd of addbefore()

// -----------------------------------------------------------------------------------------------------------------------------------------

struct node *addatpos(struct node *start,int data,int pos)
{
    /*
    In this case we have to insert the new node at a given position.The two insertion statements are same as in the previous cases.
    (tmp->link = p->link; p->link = tmp;) 
    The way of finding pointer p is different.If we have to insert at the first position we will have to update start so that case is handled separately
    */

    struct node *tmp,*p;
    int i;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    if(pos==1)
    {
        tmp->link=start;
        start = tmp;
        return start;
    }
    p = start;
    for(i=1;i<pos-1 && p!=NULL;i++){
        p = p->link;
    }
    if(p==NULL){
        printf("There are less than %d elements\n",pos);
    }
    else{
        tmp->link = p->link;
        p->link =tmp;
    }
    return start;
} //End of addatpos()

// --------------------------------------------------------------------------------------------------------------------------------

struct node *del(struct node *start,int data)
{
    /*
    Now we will see a function for deletion of an element from the list.We can't delete from an empty list so firstly we will check if the list
    is empty.If the element to be deleted is the first element of the list then it is deleted accordingly and we return from the function
    Now the element can be in between the list nodes or at the end of the list.These two cases can be handled in the same way.If we reach the end
    of the list and node containing the value is not found ,then a message is displayed
    
    */
    struct node*tmp,*p;
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    if (start->info == data) //Deletion of first node
    {
        tmp = start;
        start = start->link;
        free(tmp);
        return start;
    }
    p = start; //deletion in between or at the end
    while (p->link!=NULL)
    {
        if (p->link->info == data){
            tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return start;
        }
        p = p->link;
    }
    printf("Element %d not found\n",data);
    return start;

} //End of del()

// --------------------------------------------------------------------------------------------------------------------------------

struct node *reverse(struct node *start)
{
    /*
    The following changes need to be done in a single linked list for reversing it
    -First node should become the last node of linked list
    -Last node should become the first node of linked list and now start should point to it.
    -Link of 2nd node should point to 1st node,link of 3rd node should point to 2nd node and so on...

    We will take three pointers prev,ptr and next.Initially the pointer ptr will point to start and prev will be NULL.In each pass first the link of
    pointer ptr is stored in pointer next and after that the link of ptr is changed so that it points to its previous node.The pointers prev and ptr are moved
    forward.
    */
    struct node *prev,*ptr,*next;
    prev = NULL;
    ptr=start;
    while (ptr!=NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;

    }
    start = prev;
    return start;
} //End of reverse()

int main(){

    struct node *start = NULL;
    int choice,data,item,pos;
    while(1)
    {
        printf("1.Create list\n");
        printf("2.Display\n");
        printf("3.Count\n");
        printf("4.Search\n");
        printf("5.Add to empty list / Add at beginning\n");
        printf("6.Add at end\n");
        printf("7.Add after node\n");
        printf("8.Add before node\n");
        printf("9.Add at position\n");
        printf("10.Delete\n");
        printf("11.Reverse\n");
        printf("12.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                    start = create_list(start);
                    break;
            case 2: 
                    display(start);
                    break;
            case 3: 
                    count(start);
                    break;
            case 4: 
                    printf("Enter the element to be searchedL ");
                    scanf("%d",&data);
                    search(start,data);
                    break;
            case 5: 
                    printf("Enter the element to be inserted: ");
                    scanf("%d",&data);
                    start = addatbeg(start,data);
                    break;
            case 6: 
                    printf("Enter the element to be inserted: ");
                    scanf("%d",&data);
                    start = addatend(start,data);
                    break;
            case 7: 
                    printf("Enter the element to be inserted: ");
                    scanf("%d",&data);
                    printf("Enter the element after which to insert: ");
                    scanf("%d",&item);
                    start = addafter(start,data,item);
                    break;
            case 8: 
                    printf("Enter the element to be inserted: ");
                    scanf("%d",&data);
                    printf("Enter the element before which to insert: ");
                    scanf("%d",&item);
                    start = addbefore(start,data,item);
                    break;
            case 9: 
                    printf("Enter the element to be inserted: ");
                    scanf("%d",&data);
                    printf("Enter the position at which to insert: ");
                    scanf("%d",&pos);
                    start = addatpos(start,data,pos);
                    break;
            case 10: 
                    printf("Enter the element to be deleted: ");
                    scanf("%d",&data);
                    start = del(start,data);
                    break;
            case 11:
                    start = reverse(start);
                    break;
            case 12:
                    exit(1);
            default:
                    printf("Wrong choice\n");
        } //End of switch

    } //End of while loop

    
} //End of main
