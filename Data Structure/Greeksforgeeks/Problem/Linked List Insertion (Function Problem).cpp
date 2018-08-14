#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct Node {
    int data;
    struct Node *next;
}node;

node *head = NULL;

void insertEnd(int data) {
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;

    if(head==NULL){
        head == newnode;
    }else {
        node *current = head;;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = newnode;
    }
}

void insertFront(int data) {
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void print() {
    node *current = head;
    while(current != NULL) {
        cout << current->data;
        if(current->next != NULL) {
            cout << " ";
        }
        current = current->next;
    }
    //cout << endl;
}

int main() {

    int test;
    cin >> test;
    while(test--) {

        head = NULL;
        int n,a,b;
        cin >> n;

        while(n--) {
            cin >> a >> b;
            if(b==0){
                insertFront(a);
            }
            else{
                insertEnd(a);
            }
        }
        print();
    }
    return 0;
}

