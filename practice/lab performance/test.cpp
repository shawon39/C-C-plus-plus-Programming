#include <stdio.h>
#include <stdlib.h>

typedef struct BST{
    int data;
    struct BST *left, *right;
}node;

node *root=NULL;
node *newnode=NULL;

node *get_node()
{
    int data;
    printf("\n Enter the data: ");
    scanf("%d",&data);
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

void insert(node *root, node *newnode)
{
    if(newnode->data < root->data){
        if(root->left==NULL) root->left=newnode;
        else{
            insert(root->left,newnode);
        }
    }
    if(newnode->data > root->data){
        if(root->right==NULL) root->right=newnode;
        else{
            insert(root->right,newnode);
        }
    }
}

void preorder(node *temp)
{
    if(temp!=NULL){
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void inorder(node *temp)
{
    if(temp!=NULL){
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}

void postorder(node *temp)
{
    if(temp!=NULL){
        preorder(temp->left);
        preorder(temp->right);
        printf("%d ",temp->data);
    }
}

int main()
{
    int n;
    printf("\n How many Data You want to insert: ");
    scanf("%d",&n);
    while(n--){
        newnode=get_node();
        if(root==NULL) root=newnode;
        else{
            insert(root,newnode);
        }
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









