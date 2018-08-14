#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} node;

node *head=NULL;

void insert_end(int data) // Insert End !!
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

void insert_in_front_of(int data) // Insert Beginning !!
{
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void insert_any_position(int data) // Insert Any Position !!
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
void del() // Delete Data !!
{
    int n;
    node* current=head;
    node* previous;
    printf("Which data you want to delete: ");
    scanf("%d",&n);
    if(head->data==n)
    {
        head=head->next;
        free(current);
    }
    else
    {
        while(current!=NULL && current->data!=n)
        {
            previous=current;
            current=current->next;
        }
        if(current->data==n)
        {
            previous->next=current->next;
            free(current);
        }
        /// Error check
    }
}
del_position() // Delete Position !!
{
    node*current=head;
    node*previous;
    int count=1,n;
    printf("Enter the position: ");
    scanf("%d",&n);
    if(n==1)
    {
        head=head->next;
        free(current);
    }
    else
    {
        node*current=head;
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
void update(int data) // Data Update !!
{
    node* current=head;
    int count=1,n;
    printf("Enter the update position: ");
    scanf("%d",&n);
    while(count<n)
    {
        current=current->next;
        count++;
    }
    current->data=data;
}

void print() // printing data !!
{
    node*current=head;
    printf("Newlist is: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n\n");
}
void sum() // sum of total data !!
{
    node* current=head;
    int sum=0;
    while(current!=NULL)
    {
        sum+=current->data;
        // sum+=current->data; means, sum = sum + current->data;
        current=current->next;
    }
    printf("Sum Of Total Elements: %d\n",sum);
}
void count() // count total node
{
    node* current=head;
    int count=0;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    printf("Total Elements Left: %d\n",count);
}


void searchData()   // Search Data
{
    node* current=head;
    int key, check=0;

    printf("Enter the search data: ");
    scanf("%d",&key);

    while(current!=NULL)
    {
        if(current->data==key)
        {
            check = 1;
            break;
        }
        current=current->next;
    }
    if(check==1) printf("Found");
    if(check==0) printf("Not Found");
}

int main() // Main Function
{
    int i,n,num,t,r,y;
    printf("Enter The Elements: ");
    scanf("%d",&num);
    while(num--)
    {
        printf("Enter The number: ");
        scanf("%d",&n);
        printf("                      1.End!            2.In front of!\n");
        printf("                      3.Any position!   4.update!\n");
        scanf("%d",&t);
        if(t==1) insert_end(n);
        else if(t==2)insert_in_front_of(n);
        else if(t==3) insert_any_position(n);
        else if(t==4) update(n);
        print();
    }
    printf("How many data you want to delete: ");
    scanf("%d",&r);
    printf("\n");
    while(r--)
    {
        printf("                      1.Delete data      2.Delete Position\n");
        scanf("%d",&y);
        if(y==2) del_position();
        if(y==1) del();
        print();
    }
    count();
    sum();
    searchData();
    return 0;
}
