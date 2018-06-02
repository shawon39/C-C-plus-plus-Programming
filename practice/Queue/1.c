#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node* top=NULL;

void enqueue(int data)
{

    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(top==NULL)
    {
        top=newnode;
    }
    else
    {
        node *current=top;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newnode;
    }
}

void dequeue()
{
    node* newnode;
    if(top==NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    newnode=top;
    top=top->next;
    free(newnode);
}

void print()
{
    node* current=top;
    printf("New List is: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");

}

int main()
{
    enqueue(1);
    print();
    enqueue(2);
    print();
    enqueue(3);
    print();
    dequeue();
    print();
    enqueue(5);
    print();
    dequeue();
    print();
    enqueue(8);
    print();
    dequeue();
    print();
    return 0;
}

