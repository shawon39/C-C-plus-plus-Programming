#include <stdio.h>
#include <stdlib.h>

typedef struct Node{

    float x;
    int y;
    struct Node *next;

}node;

int main()
{
    node *head = (node*)malloc(sizeof(node));
    head->x = 1.7;
    head->y = 11;
    head->next = (node*)malloc(sizeof(node));
    head->next->x = 7.8;
    head->next->y = 8;
    head->next->next = (node*)malloc(sizeof(node));
    head->next->next->x = 6.7;
    head->next->next->y = 70;
    head->next->next->next = head;

    node *current = head;
    while(current!=NULL)
    {
        printf("%.2f %d \n", current->x, current->y);
        current = current->next;
    }

}
