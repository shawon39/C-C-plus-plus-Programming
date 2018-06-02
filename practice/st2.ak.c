#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;
node* head=NULL;

void enqueue(int data)
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

void dequeue()
{
    if(head==NULL)
    {
        printf("Stack is empty!\n");
        return -1;
    }
    else
    {
        node*current=head;
        head=head->next;
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
    enqueue(5);
    enqueue(10);
    dequeue();
    enqueue(15);
    enqueue(20);
    print();
    return 0;
}



