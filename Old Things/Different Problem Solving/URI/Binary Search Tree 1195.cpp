#include <bits/stdc++.h>
using namespace std;

#define malloc (node*)malloc(sizeof(node))

typedef struct BST
{
    int data;
    struct BST *left, *right;
} node;

node *newnode = NULL;
int ct = 0;

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
        cout << " " << temp->data;
        pre_order(temp->left);
        pre_order(temp->right);
    }
}

void in_order( node *temp)
{
    if( temp != NULL )
    {
        in_order(temp->left);
        cout << " " << temp->data;
        in_order(temp->right);
    }
}

void post_order( node *temp)
{
    if( temp != NULL )
    {
        post_order(temp->left);
        post_order(temp->right);
        cout << " " << temp->data;
    }
}

int main()
{
     int test, lol=1; cin >> test;
     while(test--) {
        node *root = NULL;
        int n; cin >> n;
        while(n--) {
            newnode = get_node();
            if( root==NULL ) root=newnode;
            else insertData(root,newnode);
        }
        cout << "Case " << lol++ << ":";
        cout << endl <<"Pre.:";   pre_order(root);
        cout << endl <<"In..:";    in_order(root);
        cout << endl <<"Post:";  post_order(root);
        cout << endl <<endl;
     }
    return 0;
}


