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
