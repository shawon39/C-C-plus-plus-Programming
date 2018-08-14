#include <stdio.h>
#include <stdio.h>

typedef struct Tree
{
    int data;
    struct Tree *left, *right;
}node;

node *root=NULL;
node *newnode=NULL;

node *get_node()
{
    int value;
    printf("\nEnter The number: ");
    scanf("%d",&value);
    newnode=(node*)malloc(sizeof(node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void insert(node *root, node *newnode)
{
    if(root->data > newnode->data)
    {
        if(root->left==NULL) root->left=newnode;
        else insert(root->left,newnode);
    }
    else
    {
        if(root->right==NULL) root->right=newnode;
        else insert(root->right,newnode);
    }
}

void preorder(node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}

void postorder(node *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->data);
    }

}

void search(node *temp, int data)
{
    if(temp==NULL) printf("\n\nData Not Found !!\n");
    else if(temp->data==data) printf("\nData Found !!\n");
    else
    {
        if(data < temp->data) search(temp->left,data);
        else search(temp->right,data);
    }
}
void maxheap(node *temp)
{
    if(temp==NULL) printf("\nThere are no node in this tree !!\n");
    else
    {
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        printf("\n\nThe Maximum value is in the tree: %d",temp->data);
    }
}
void minheap(node *temp)
{
    if(temp==NULL) printf("\nThere are no node in this tree !!\n");
    else
    {
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        printf("\n\nThe minimum value is in the tree: %d",temp->data);
    }
}
int main()
{
    int num,data;
    printf("\nHow many data you want to insert: ");
    scanf("%d",&num);
    while(num--)
    {
        newnode=get_node();
        if(root==NULL) root=newnode;
        else insert(root,newnode);
    }
    printf("\n\The preorder traverse of the tree: \n\n");
    preorder(root);
    printf("\n\nThe inorder traverse of the tree: \n\n");
    inorder(root);
    printf("\n\nThe postorder traverse of the tree: \n\n");
    postorder(root);
    printf("\n");
    printf("\nEnter the data for searching: ");
    scanf("%d",&data);
    search(root,data);
    maxheap(root);
    minheap(root);
    printf("\n");
    return 0;
}






