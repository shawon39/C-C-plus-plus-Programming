#include <bits/stdc++.h>
using namespace std;

#define malloc (node*)malloc(sizeof(node))

typedef struct BST
{
    char data[500000];
    struct BST *left, *right;
} node;

node *newnode = NULL;

int check(char *string1, char *string2)
{
    int count1 = 0, count2 = 0, flag = 0, i;


    while (string1[count1] != '\0')
        count1++;

    while (string2[count2] != '\0')
        count2++;
    i = 0;

    while ((i < count1) && (i < count2))
    {
        if (string1[i] == string2[i])
        {
            i++;
            continue;
        }
        if (string1[i] < string2[i])
        {
            flag = -1;
            break;
        }
        if (string1[i] > string2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 0;
    if (flag == 1)
        return 1;
    if (flag == -1)
        return -1;
}

node *get_node(char *s2)
{
    newnode = malloc;
    strcpy(newnode->data, s2);
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void insertData(node *temproot, node *newnode)
{
    if( check(newnode->data , temproot->data) == -1 )
    {
        if( temproot->left == NULL ) temproot->left = newnode;
        else insertData(temproot->left, newnode);
    }

    if( check(newnode->data , temproot->data) == 1 )
    {
        if(temproot->right == NULL) temproot->right = newnode;
        else insertData(temproot->right, newnode);
    }
}

void in_order( node *temp )
{
    if( temp != NULL )
    {
        in_order(temp->left);
        cout << temp->data << endl;
        in_order(temp->right);
    }
}


int main()
{
     #ifndef lol
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    char s[500000];
    node *root = NULL;

    while( scanf("%s",s) == 1 )
    {
        char s2[500000] = "";
        int l = strlen(s);
        for(int i=0, j=0; i<l; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s2[j++]= s[i]+32;
            }
            else if( s[i] >='a' && s[i] <= 'z')
            {
                s2[j++]= s[i];
            }
            else {
                    newnode = get_node(s2);
                    if( root==NULL ) root=newnode;
                    else insertData(root,newnode);
                    strcpy(s2,"");
                    j = 0;
            }
        }
        newnode = get_node(s2);
        if( root==NULL ) root=newnode;
        else insertData(root,newnode);
    }
    in_order(root);
    return 0;
}



















