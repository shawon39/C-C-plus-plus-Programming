#include <stdio.h>
int main()
{
    char ch='A';
    char *p,**q;
    p=&ch;
    q=&p;
    **q='C';

    printf("Values of ch = %c\n",ch);
    printf("Values of *p = %c\n",*p);
    printf("Values of **q = %c\n",**q);
}
