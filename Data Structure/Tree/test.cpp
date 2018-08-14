#include <bits/stdc++.h>
using namespace std;

#define malloc (node*)malloc(sizeof(node))

typedef struct BST
{
    int data;
    struct BST *left, *right;
} node;

node *root = NULL;
node *newnode = NULL;

node *get_node()
{
    int data;
    cin >> data;
    newnode = malloc;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void insertData(node *temproot, node *newnode)
{
    if( newnode->data < temproot->data )
    {
        if( temproot->left == NULL ) temproot->left = newnode;
        else insertData(temproot->left, newnode);
    }

    if( newnode->data > temproot->data )
    {
        if(temproot->right == NULL) temproot->right = newnode;
        else insertData(temproot->right, newnode);
    }
}

void pre_order(node *temp)
{
    if( temp!= NULL )
    {
        cout << temp->data << " ";
        pre_order(temp->left);
        pre_order(temp->right);
    }
}

void in_order( node *temp )
{
    if( temp != NULL )
    {
        in_order(temp->left);
        cout << temp->data << " ";
        in_order(temp->right);
    }
}

void post_order( node *temp )
{
    if( temp != NULL )
    {
        post_order(temp->left);
        post_order(temp->right);
        cout << temp->data << " ";
    }
}

int main()
{
    cout << "Length Of n: " ;
    int n; cin >> n;
    while(n--) {
        cout << "Data: " ;
        newnode = get_node();
        if( root==NULL ) root=newnode;
        else insertData(root,newnode);
    }

    cout  << endl << "Pre-Order: ";
    pre_order(root);
    cout  << endl << "In-Order: ";
    in_order(root);
    cout  << endl << "Post-Order: ";
    post_order(root);
    return 0;
}
