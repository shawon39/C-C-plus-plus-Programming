#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
};

Node* newNode(int key)
{
	Node* node = new Node;
	node->data = key;
	node->left = node->right = nullptr;

	return node;
}

void inorder(Node *root)
{
	if (root == nullptr)
		return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

Node* maximumKey(Node* ptr)
{
	while(ptr->right != nullptr) {
		ptr = ptr->right;
	}
	return ptr;
}

Node* insert(Node* root, int key)
{
	if (root == nullptr)
		return newNode(key);

	if (key < root->data)
		root->left = insert(root->left, key);

    else
		root->right = insert(root->right, key);

	return root;
}


void deleteNode(Node* &root, int key)
{
	if (root == nullptr)
		return;

	if (key < root->data)
		deleteNode(root->left, key);

	else if (key > root->data)
		deleteNode(root->right, key);

	else
	{
        if (root->left == nullptr && root->right == nullptr) /// leaf
        {
			delete root;
			root = nullptr;
		}

		else if (root->left && root->right)
		{
			Node *predecessor = maximumKey(root->left);
			root->data = predecessor->data;
			deleteNode(root->left, predecessor->data);
		}
		else
		{

            Node* child = (root->left)? root->left: root->right;
			Node* curr = root;
			root = child;
			delete curr;
		}
	}
}


int main()
{
	Node* root = nullptr;
	int keys[] = { 15, 10, 20, 8, 12, 25 };

	for (int key : keys)
		root = insert(root, key);

	deleteNode(root, 12);
	inorder(root);

	return 0;
}
