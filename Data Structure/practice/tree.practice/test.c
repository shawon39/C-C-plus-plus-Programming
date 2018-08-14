#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int data;
    struct Tree *left, *right;
}node;

node *root=NULL;
node *new_node=NULL;

node *get_node()
{
    int value;
    printf("\nEnter The Data You want to insert: ");
    scanf("%d",&value);
    new_node=(node*)malloc(sizeof(node));
    new_node->data=value;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}
 void insert_node(node *root, node *new_node)
 {
     if(root->data > new_node->data)
     {
         if(root->left==NULL) root->left=new_node;
         else insert_node(root->left,new_node);

     }
     else
     {
         if(root->right==NULL) root->right=new_node;
         else insert_node(root->right,new_node);
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
int main()
{
    int i,n;
    printf("How many data you want to insert: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        new_node=get_node();
        if(root==NULL) root=new_node;
        else insert_node(root,new_node);

    }
    printf("\nPreorder: ");
    preorder(root);
    printf("\nInorder: ");
    inorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\n");
    return 0;
}




