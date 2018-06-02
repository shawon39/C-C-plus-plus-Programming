#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left, *right;
} node;

node *root = NULL;
node *newnode = NULL;

node *get_node()
{
    int i;
    printf("\nEnter The data: ");
    scanf("%d",&i);
    newnode=(node*)malloc(sizeof(node));
    newnode->data=i;
    newnode->left=newnode->right=NULL;
    return newnode;
}

void insert(node *temp_root, node *newnode)
{
    if(newnode->data < temp_root->data)
    {
        if(temp_root->left==NULL) temp_root->left=newnode;
        else insert(temp_root->left,newnode);
    }
    else
    {
        if(temp_root->right==NULL) temp_root->right=newnode;
        else insert(temp_root->right,newnode);
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
        preorder(temp->left);
        preorder(temp->right);
        printf("%d ",temp->data);
    }
}

int main()
{
    int n;
    printf("\nHow many data you want to insert: ");
    scanf("%d",&n);
    while(n--)
    {
        newnode=get_node();
        if(root==NULL) root=newnode;
        else insert(root,newnode);
    }

    printf("\nPreorder Traverse: ");
    preorder(root);

    printf("\n\nInorder Traverse: ");
    inorder(root);

    printf("\n\nPostorder Traverse: ");
    postorder(root);

    printf("\n");
    return 0;
}


