#include<stdio.h>
#include<stdlib.h>

//Linked list implementation of stack

struct Node{

    int data;
    struct Node* link;
};

struct Node* top = NULL; //by initializing top to null we can that stack is empty

void push(int x){

    struct Node* temp = (struct Node *) malloc(sizeof(struct Node*)); // we are creating a new node using malloc()
    temp->data = x;
    temp->link = top;
    top = temp;
    
}

void pop(){

    struct Node* temp;
    if(top == NULL){
        return;
    }
    temp = top;
    top = temp->link;
    free(temp);
}
int Top(){
    return top->data;
}



int main(){

    push(2); 
    push(5);
    push(4);
    pop();
    push(30);


    printf("%d",Top()); //printing the top element
    
}
