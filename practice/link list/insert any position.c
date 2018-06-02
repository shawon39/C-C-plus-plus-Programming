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
    int count=1,n;
    printf("Enter the position: ");
    scanf("%d",&n);
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(n==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        node* current=head;
        while(count<n-1)
        {
            current=current->next;
            count++;
        }
        newnode->next=current->next;
        current->next=newnode;
    }
}
void print()
{
    node* current=head;
    printf("\nNew list id: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main()
{
    insert(5);print();
    insert(10);print();
    insert(15);print();
    insert(20);print();
    insert(25);print();
    insert(30);print();
    return 0;
}


















