#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *lchild, *rchild;
} node;

node *root=NULL;
node *new_node=NULL;

node *get_node()
{
    int value;
    printf("\nEnter the value for the node: ");
    scanf("%d", &value);
    new_node = (node*)malloc(sizeof(node));
    new_node -> data = value;
    new_node -> lchild = NULL;
    new_node -> rchild = NULL;

    return new_node;
}

void insert_node(node *root, node *new_node)
{
    if(new_node->data < root->data)
    {
        if(root->lchild == NULL)
        {
            root->lchild = new_node;
        }
        else
        {
            insert_node(root->lchild,new_node);
        }
    }
    else
    {
        if(root->rchild == NULL)
        {
            root->rchild = new_node;
        }
        else
        {
            insert_node(root->rchild, new_node);
        }
    }
}

void preorder(node *temp)
{

    if(temp != NULL)
    {
        printf("%d  ",temp ->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}

void inorder(node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->lchild);
        printf("%d ", temp->data);
        inorder(temp->rchild);
    }
}

void postorder(node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->lchild);
        inorder(temp->rchild);
        printf("%d ", temp->data);
    }
}

int main()
{
    int n, i, value;
    printf("\n\nEnter the number of nodes you want to insert in the BST: ");
    scanf("%d", &n);

    for(i = 0; i<n ; i++)
    {
        new_node = get_node();
        if(root == NULL)
        {
            root = new_node;
        }
        else
        {
            insert_node(root, new_node);
        }
    }

    printf("\n\nThe preorder traverse of the tree:  ");
    preorder(root);

    printf("\n\nThe Inoder traverse of the tree:  ");
    inorder(root);

    printf("\n\nThe postorder traverse of the tree:  ");
    postorder(root);
    printf("\n");
    return 0;
}
