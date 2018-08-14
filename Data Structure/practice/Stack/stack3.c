#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node* top=NULL;
void push(int data)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=top;
    top=temp;
}
void pop(){
    node* temp;
    if(top==NULL)
    {
        printf("stack is empty!\n");
        return;
    }
    temp=top;
    top=top->next;
    free(temp);
}
void print()
{
    node* current=top;
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
