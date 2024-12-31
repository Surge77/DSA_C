/*

Radix sort is the linear sorting algorithm that is used for integers. In Radix sort, there is digit by digit sorting is performed that
is started from the least significant digit to the most significant digit.

The process of radix sort works similar to the sorting of students names, according to the alphabetical order. In this case, there are 26 radix formed
due to the 26 alphabets in English.In the first pass, the names of students are grouped according to the ascending order of the first letter of their names. 
After that, in the second pass, their names are grouped according to the ascending order of the second letter of their name.
And the process continues until we find the sorted list.

*/

//Sorting using radix sort

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
} *start = NULL;
void radix_sort();
int large_dig();
int digit(int number,int k);

int main()
{
    struct node *tmp,*q;
    int n,i,item;
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&item);
        //Inserting elements in the linked list
        tmp = malloc(sizeof(struct node));
        tmp->info = item;
        tmp->link = NULL;
        if(start==NULL) //inserting first element
        {
            start = tmp;
        }
        else
        {
            q = start;
            while(q->link!=NULL)
            {
                q = q->link;
            }
            q->link = tmp;

        }

    } //End of for*
    radix_sort();
    printf("The sorted list is:  \n");
    q = start;
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q = q->link;
    }
    printf("\n");
    return 0;
} //End of main()


void radix_sort()
{
    int i,k,dig,least_sig,most_sig;
    struct node *p,*rear[10],*front[10];
    most_sig = large_dig(start);
    for(k=1;k<=most_sig;k++)
    {
        //Make all the queues empty at the beginning of each pass
        for(i=0;i<=9;i++)
        {
            front[i] = NULL;
            rear[i] = NULL;
        }
        for(p=start;p!=NULL;p=p->link)
        {
            dig = digit(p->info,k); //Find kth digit in the number
            //Add the number to queue of dig
            if(front[dig]==NULL)
            {
                front[dig] = p;
                rear[dig] = p;
            }
            else
            {
                rear[dig]->link = p;
                rear[dig] = p;
            }
        }
        //Join all the queues to form the new linked list
        i = 0;
        while(front[i] == NULL)
        {
            i++;
        }
        start = front[i];
        while(i<=9)
        {
            if(rear[i+1]!=NULL)
            {
                rear[i]->link = front[i+1];
            }
            else{
                rear[i+1] = rear[i];
            }
            i++;

        }
        rear[9]->link = NULL;
    } 

} //End of radix_sort()

//This function find number of digits in the largest element of the list

int large_dig(struct node *start)
{
    struct node *p = start;
    int large = 0, ndig = 0;
    //Find largest element
    while(p!=NULL)
    {
        if(p->info>large)
        {
            large = p->info;
        }
        p = p->link;
    }
    //Find number of digits in the largest element
    while(large!=0)
    {
        ndig++;
        large = large/10;
    }
    return (ndig);    
} //End of large_dig()

//This function returns the kth digit in the number

int digit(int number, int k)
{
    int i,digit;
    for(i=0;i<k;i++)
    {
        digit = number%10;
        number = number/10;
    }
    return (digit);
} //End of digit()