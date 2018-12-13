typedef struct Node {
    int data;
    struct Node *next;
} node;
node *head=NULL;




void insert_end(int data)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL) {
        head=newnode;
    }
    else {
        node* current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newnode;
    }
}




void insert_beginning(int data)
{
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}




void insert_any_position(int data)
{
    int count=1,n;
    scanf("%d",&n);
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(n==1) {
        newnode->next=head;
        head=newnode;
    }
    else {
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




void delete_data(int n)
{
    node* current=head;
    node* previous;
    if(head->data==n) {
        head=head->next;
        free(current);
    }
    else
    {
        while(current!=NULL && current->data!=n) {
            previous=current;
            current=current->next;
        }
        if(current!=NULL) {
            previous->next=current->next;
            free(current);
        }
    }
}




void del_position(int n)
{
    node*current=head;
    node*previous;
    int count=1;

    if(n==1) {
        head=head->next;
        free(current);
    }
    else {
        node*current=head;
        while(count<n) {
            previous=current;
            current=current->next;
            count++;
        }
        previous->next=current->next;
        free(current);
    }
}



void sum()
{
    node* current=head;
    int sum=0;
    while(current!=NULL)
    {
        sum+=current->data;
        current=current->next;
    }
    return sum;
}



int count()
{
    node* current=head;
    int count=0;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}




void searchData(int key)
{
    node* current=head;
    int check=0;

    while(current!=NULL) {
        if(current->data==key) {
            check = 1;
            break;
        }
        current=current->next;
    }
    if(check==1) printf("Found");
    if(check==0) printf("Not Found");
}






----------------

int main()
{
    function_name(11);
}
