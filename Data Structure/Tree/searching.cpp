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

int searchTree( node *temp, int data )
{
    if( temp ==NULL ) return 0;
    if( temp->data == data ) return 1;
    if( data < temp->data ) return searchTree(temp->left,data);
    else return searchTree(temp->right,data);
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

    int x = searchTree(root,5);

    x? printf("Found") : printf("Not Found");

    return 0;
}

