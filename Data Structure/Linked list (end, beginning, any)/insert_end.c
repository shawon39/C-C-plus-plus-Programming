<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}node;

node* head=NULL;

void insert_end(int data)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
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

void printData()
{
    node*current=head;
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
    insert_end(5);
    printData();

    insert_end(10);
    printData();

    insert_end(15);
    printData();

    insert_end(20);
    printData();

    insert_end(25);
    printData();
}
=======
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}node;

node* head=NULL;

void insert_end(int data)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
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

void printData()
{
    node*current=head;
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
    insert_end(5);
    printData();

    insert_end(10);
    printData();

    insert_end(15);
    printData();

    insert_end(20);
    printData();

    insert_end(25);
    printData();
}
>>>>>>> 0bf86327633e1c530f067a3de9199f1b4b43d8af
