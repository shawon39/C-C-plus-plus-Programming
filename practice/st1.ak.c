#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;
node* head=NULL;

void push(int data)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        node* current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newnode;
    }
}

void pop()
{
    if(head==NULL)
    {
        printf("Stack is empty!\n");
        return -1;
    }
    else
    {
        node*current=head;
        node*previous;
        while(current->next!=NULL)
        {
            previous=current;
            current=current->next;
        }
        previous->next=NULL;
        free(current);
    }
}

print()
{
    node*current=head;
    printf("Number is: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}

int main()
{
    pop();
    push(5);
    push(10);
    pop();
    push(15);
    push(20);
    print();
}


