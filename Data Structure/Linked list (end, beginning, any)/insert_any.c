<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}node;

node* head=NULL;

void insert_any(int data)
{
    int count=1,n;
    printf("Enter the position: ");
    scanf("%d",&n);
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(n==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        node*current=head;
        while(count<n-1)
        {
            current=current->next;
            count++;
        }
        newnode->next=current->next;
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
    printf("\n\n");
}

int main()
{
    insert_any(5);
    printData();

    insert_any(10);
    printData();

    insert_any(15);
    printData();

    insert_any(20);
    printData();

    insert_any(25);
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

void insert_any(int data)
{
    int count=1,n;
    printf("Enter the position: ");
    scanf("%d",&n);
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(n==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        node*current=head;
        while(count<n-1)
        {
            current=current->next;
            count++;
        }
        newnode->next=current->next;
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
    printf("\n\n");
}

int main()
{
    insert_any(5);
    printData();

    insert_any(10);
    printData();

    insert_any(15);
    printData();

    insert_any(20);
    printData();

    insert_any(25);
    printData();
}
>>>>>>> 0bf86327633e1c530f067a3de9199f1b4b43d8af
