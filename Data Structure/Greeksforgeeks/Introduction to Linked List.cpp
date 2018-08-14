#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void print(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL){
        cout << current->data <<endl;
        current = current->next;
    }
}

int getCount(struct Node *head)
{
    if(head == NULL){
        return 0;
    }
    return 1+getCount(head->next);
}

int searchData(struct Node *head, int data)
{
    if(head == NULL){
        return 0;
    }
    if(head->data == data){
        return 1;
    }
    return searchData(head->next, data);
}

int main() {

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    print(head);

    cout << getCount(head) <<endl;
    (searchData(head,5))? cout << "found" <<endl : cout << "Not found" <<endl;
    return 0;

}
