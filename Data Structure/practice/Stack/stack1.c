#include <stdio.h>
int stack[5];
int top=-1;

void push(int data)
{
    if(top>3)
    {
        printf("Stack is Full\n");
        return;
    }
    else
    {
        stack[++top]=data;
    }
}
void pop()
{
    if(top<0)
    {
        printf("Stack is Empty!\n");
        return;
    }
    else
    {
        stack[--top];
    }
}













void print()
{
    int i;
    printf("Number is: ");
    for(i=0; i<=top; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    print();
    return 0;
}






