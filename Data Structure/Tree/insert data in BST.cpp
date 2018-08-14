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
    return 0;
}




