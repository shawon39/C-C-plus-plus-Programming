#include <stdio.h>
#include <stdlib.h>
#define max 100
char stack[max];
int top=-1;

void push(char k)
{
    if(top+1==max) printf("Stack is full\n");
    else
    {
        top++;
        stack[top]=k;
    }
}

char pop()
{
    char a;
    if(top<0)
    {
        printf("Stack is empty!\n");
        return '\O';
    }
    else
    {
        a=stack[top];
        top--;
        return a;
        //return stack[--top];
    }
}

int main()
{
    int i,t,l;
    char ch,e[max];
    printf("Enter the infix with(): ");
    gets(e);
    l=strlen(e);
    printf("Postfix is: ");
    for(i=0; i<=l-1; i++)
    {
        ch=e[i];
        if(ch=='(' || ch=='*' || ch=='+' || ch=='-' || ch=='/' || ch=='^')
        {
            push(ch);
        }
        else if(ch!=')')
        {
            putchar(ch);
        }
        else
        {
            do
            {
                ch=pop();
                if(ch!='(')
                {
                    putchar(ch);
                }
            }while(ch!='(');
        }
    }
    return 0;
}


/*
#include<stdio.h>
#include<string.h>
#define max 100
char stack[max];
int top=-1;
void push(char character);
char pop();

int main()
{
    int x,i;
    char infix[max],ch;
    printf("Enter The Infix: ");
    scanf("%s",infix);
    printf("\nPostfix is: ");
    x=strlen(infix);
    for(i=0; i<x; i++)
    {
        ch=infix[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
        {
            push(ch);
        }
        else if(ch!=')')
        {
            putchar(ch);
        }
        else
        {
            do
            {
                ch=pop();
                if(ch!='(')
                {
                    putchar(ch);
                }
            }
            while(ch!='(');
        }
    }
    printf("\n");
    return 0;
}
void push(char character)
{
    if(top==max-1)
    {
        printf("Stack IS full!\n");
    }
    else
    {
        stack[++top]=character;
    }
}

char pop()
{
    if(top==-1)
    {
        printf("Stack Is Empty!\n");
        return '\O';
    }
    else
    {
        return stack[top--];
    }
}

/// Infix: ((4*2)+(9/2)+((2*3)*8))
/// postfix: 42*92/23*8*++
*/

//   ((((4/2)+3)-(2*2))

//   ((((

//   4/2

//   42/3+22*-

//   (A+(B*C)/D+E-(F*G))

