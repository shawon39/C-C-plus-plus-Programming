#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int data;
    struct Tree *left, *right;
}tree;

void insert(tree **t,int val)
{
    tree *temp=NULL;
    if(!(*t))
    {
        temp=(tree*)malloc(sizeof(tree));
        temp->left=temp->right=NULL;
        temp->data=val;
        *t=temp;
        return;
    }
    if(val<(*t)->data)
    {
        insert(&(*t)->left,val);
    }
    else if(val>(*t)->data)
    {
        insert(&(*t)->right,val);
    }
}

void preorder(tree *t)
{
    if(t)
    {
        printf("%d\n",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void inorder(tree *t)
{
    if(t)
    {
        inorder(t->left);
        printf("%d \n",t->data);
        inorder(t->right);
    }
}

void postorder(tree *t)
{
    if(t)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d \n",t->data);
    }
}

int search(tree *t,int data)
{
    if(t==NULL) return 0;
    if(t->data==data) return 1;
    if(data<t->data) return search(t->left,data);
    else return search(t->right,data);
}

int main()
{
    tree *root;
    root=NULL;
    insert(&root,9);
    insert(&root,4);
    insert(&root,10);
    insert(&root,12);
    insert(&root,16);

    printf("Inorder \n");
    inorder(root);
    printf("Preorder \n");
    preorder(root);
    printf("Postorder \n");
    postorder(root);

    if(search(root,12)) printf("\nYes!\n");
    else printf("\nNo!\n");
    if(search(root,2)) printf("\nYes!\n");
    else printf("\nNo!\n");
    return 0;
}

