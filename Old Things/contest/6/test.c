#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node* head=NULL;

void insert(int x)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL) head=newnode;
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
void del()
{
    int x;
    node* current=head;
    node* previous;
    printf("whice node do u want to delete: ");
    scanf("%d",&x);
    if(head->data==x)
    {
        head=head->next;
        free(current);
    }
    else

        while(current->next!=NULL && current->data!=x)
        {
            previous=current;
            current=current->next;
        }
    if(current->data==x)
    {
        previous->next=current->next;
        free(current);
    }
}


void print()
{
    node* current=head;
    printf("new list is:");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main()
{
    insert(4);
    insert(5);
    insert(7);
    del();
    print();
}
