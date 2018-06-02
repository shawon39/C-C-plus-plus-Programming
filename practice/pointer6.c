#include <stdio.h>
int main()
{
    char ch1='A',ch2='B',ch3='C';
    char *p1,*p2,*p3;

    p1=&ch1;
    p2=&ch2;
    p3=&ch3;

    printf("%c %c %c\n",ch1,ch2,ch3);
    printf("%p %p %p\n",&ch1,&ch2,&ch3);

    printf("%c %c %c\n",*p1,*p2,*p3);
    printf("%p %p %p\n",p1,p2,p3);
}
