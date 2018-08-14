#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd(int data) {
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;

    if(head==NULL){
        head == newnode;
    }else {
        struct Node *current = head;;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = newnode;
    }
}

void insertFront(int data) {
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void print() {
    struct Node *current = head;
    while(current != NULL) {
        cout << current->data;
        if(current->next != NULL) {
            cout << " ";
        }
        current = current->next;
    }
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

