#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;
node *head=NULL;

void insert(int data)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        node *current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newnode;
    }
}
void print()
{
    node *print=head;
    while(print!=NULL)
    {
        printf("%d ",print->data);
        print=print->next;
    }
}

int main()
{
    insert(5);
    insert(15);
    insert(25);
    insert(35);
    insert(45);
    print();;;;;
    return 0;
}



