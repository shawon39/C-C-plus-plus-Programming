#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
} node;
node* head=NULL;

void insert(int data)
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
void print()
{
    node* current=head;
    printf("New List is: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");

}
void del()
{
    int x;
    node* current=head;
    node* previous;
    printf("Which Data You wanna delete: ");
    scanf("%d",&x);
    if(head->data==x)
    {
        head->next=head;
        free(current);
    }
    else
    {
        while(current!=NULL && current->data!=x)
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
}
int main()
{
    int i,num,n;
    scanf("%d",&num);
    for(i=0; i<num; i++)
    {
        printf("Enter The Number: ");
        scanf("%d",&n);
        insert(n);
        print();
        printf("\n");
    }
    del();
    print();
    return 0;
}

