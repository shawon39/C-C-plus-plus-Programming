#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node* stack=NULL;
void push(int data)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(stack==NULL)
    {
        stack=temp;
    }
    else
    {
        node* current=stack;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=temp;
    }
}
void pop()
{
    node* current=stack;
    node* prev;
    if(stack==NULL)
    {
        printf("stack is empty!\n");
        return;
    }
    else
    {
        while(current->next!=NULL)
        {
            prev=current;
            current=current->next;
        }
        prev->next=current->next;
        free(current);
    }
}
void print()
{
    node* current=stack;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");

}

int main()
{
    pop();print();
    push(1);print();
    push(2);print();
    push(3);print();
    pop();print();
    push(5);print();
    pop();print();
    push(8);print();
    pop();print();
    return 0;
}
