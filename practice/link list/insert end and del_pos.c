#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node* head;

void insert(int data)
{
    node* newNode;
    newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        node *current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newNode;
    }
}
void del_position()
{
    int count=1,n;
    printf("\nEnter the position: ");
    scanf("%d",&n);

    node* current=head;
    node* previous;

    if(n==1)
    {
        head=head->next;
        free(current);

    }
    else
    {
        while(count<n)
        {
            previous=current;
            current=current->next;
            count++;
        }
        previous->next=current->next;
        free(current);
    }
}
void print()
{
    node* current=head;
    printf("New list id: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main()
{
    insert(5);
    insert(10);
    insert(15);
    insert(20);
    insert(25);
    insert(30);
    print();
    del_position();
    print();
    del_position();
    print();
    del_position();
    print();
    del_position();
    print();
    del_position();
    print();
    del_position();
    print();
    return 0;
}




















