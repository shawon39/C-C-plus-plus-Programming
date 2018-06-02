#include <stdio.h>
#define max 5
int queue[max];
int t=0,rear=0,front=0;

void enqueue(int data)
{
    if(t==max)
    {
        printf("Queue Is full!\n");
        return;
    }
    queue[front]=data;
    front++;
    t++;
}
int dequeue()
{
    int temp;
    if(front==rear)
    {
        printf("Queue is empty!\n");
        return 0;
    }
    rear=rear+1;
    t--;
}

void print()
{
    int i;
    printf("New List is: ");
    for(i=rear; i<front; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(5); print();
    dequeue();  print();
    enqueue(10); print();
    enqueue(15); print();
    enqueue(20); print();
    dequeue();  print();
    enqueue(25); print();
    enqueue(30); print();
    dequeue();  print();

    return 0;
}





