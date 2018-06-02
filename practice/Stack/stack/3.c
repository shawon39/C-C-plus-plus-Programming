#include <stdio.h>
#define max 5
int queue[max],rear=0,front=0;

void enqueue(int data)
{
    if(rear==max)
    {
        printf("Queue Is full!\n");
        return;
    }
    queue[front]=data;
    front++;
    printf("%d is Enqued!\n",data);
}
int dequeue()
{
    int temp;
    if(front==rear)
    {
        printf("queue is empty!\n");
        return 0;
    }
    rear=rear+1;
    temp=queue[rear-1];
    return temp;
}

int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(9);
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    return 0;
}



