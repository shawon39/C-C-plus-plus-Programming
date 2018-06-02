#include<stdio.h>
#include<stdlib.h>

typedef struct BST
{
    int data;
    struct BST *lchild, *rchild;
}node;

node *root = NULL;
node *new_node = NULL;
node *parent = NULL;
node *p_node = NULL;

node *get_node()
{
    int value;
    new_node = malloc(sizeof(node));
    printf("\nEnter the value for the node: ");
    scanf("%d", &value);

    new_node -> data = value;
    new_node -> lchild = NULL;
    new_node -> rchild = NULL;

    return new_node;
}

void insert_node(node *root, node *new_node)
{
    if(new_node -> data < root -> data)
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
        if(root -> rchild == NULL)
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

void inorder(node *temp) {
   if (temp != NULL)
   {
      inorder(temp->lchild);
      printf("%d ", temp->data);
      inorder(temp->rchild);
   }
}

void postorder(node *temp) {
   if (temp != NULL)
   {
      inorder(temp->lchild);
      inorder(temp->rchild);
      printf("%d ", temp->data);
   }
}

void Find_Min(node *temp)
{
    if(temp == NULL)
        printf("\n\nThere is no node in the tree!!\n\n");

    else
    {
        while(temp->lchild != NULL)
        {
            temp = temp -> lchild;
        }
        printf("\n\n\nThe minimum value in the tree is : %d\n",temp->data);
    }
}

void Find_Max(node *temp)
{
    if(temp == NULL)
        printf("\n\nThere is no node in the tree!!\n\n");

    else
    {
        while(temp->rchild != NULL)
        {
            temp = temp -> rchild;
        }
        printf("\nThe Maximum value in the tree is : %d\n\n",temp->data);
    }
}

void search(node *temp , int value)
{
    int choice;
    if(temp == NULL)
    {
        printf("\n\ndata not exits\n\n");
        return;
    }
    if(temp-> data == value)
    {
        printf("\nData found\n\n");
        printf("\n\nPress 1 for delete this node: ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            deleteNode(temp,parent);
            printf("\n\nAfter deletion: \n\n");
            inorder(root);
        }
    }

    else
    {
        if(value < temp->data)
        {
            parent = temp;
            search(temp->lchild , value);
        }
        else
        {
            parent = temp;
            search(temp->rchild , value);
        }
    }
}


void deleteNode(node *deletedNode, node *parentNode)
{
    if(deletedNode -> lchild == NULL && deletedNode -> rchild == NULL)
    {
        if(deletedNode -> data <= parentNode-> data)
        {
            parentNode -> lchild = NULL;
            printf("\n\n%d deleted!! ", deletedNode -> data);
            free(deletedNode);
        }
        else
        {
            parentNode -> rchild = NULL;
            printf("\n\n%d deleted!! ", deletedNode -> data);
            free(deletedNode);
        }
        return;
    }

    else if(deletedNode -> lchild != NULL && deletedNode -> rchild == NULL)
    {
        if(deletedNode -> data < parentNode-> data)
        {
            parentNode -> lchild = deletedNode -> lchild;
            printf("\n\n%d deleted!! ", deletedNode -> data);
            free(deletedNode);
        }
        else
        {
            parentNode -> rchild = deletedNode -> lchild;
            printf("\n\n%d deleted!! ", deletedNode -> data);
            free(deletedNode);
        }
         return;
    }
    else if(deletedNode -> lchild == NULL && deletedNode -> rchild != NULL)
    {
        if(deletedNode -> data < parentNode-> data)
        {
            parentNode -> lchild = deletedNode -> rchild;
            printf("\n\n%d deleted!! ", deletedNode -> data);
            free(deletedNode);
        }
        else
        {
            parentNode -> rchild = deletedNode -> rchild;
            printf("\n\n%d deleted!! ", deletedNode -> data);
            free(deletedNode);
        }

    return;
    }

    else if(deletedNode -> lchild != NULL && deletedNode -> rchild != NULL)
    {
        node *successor = deletedNode->lchild;
        p_node = deletedNode;

        while(successor->rchild != NULL)
        {
            p_node = successor;
            successor = successor -> rchild;
        }
        printf("\n\nSuccessor = %d\n",successor -> data);
        printf("\n\n%d deleted!! ", deletedNode -> data);
        deletedNode -> data = successor -> data;
        deleteNode(successor,p_node);
    }
}

void main()
{
    int n , i, value;
    printf("\n\nEnter the number of nodes you wnt to insert in the BST: ");
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

    printf("\n\n\nEnter Value You want to Search: ");
    scanf("%d",&value);
    search(root, value);

    Find_Min(root);
    Find_Max(root);
}

