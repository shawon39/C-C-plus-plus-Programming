#include <stdio.h>
int main()
{
    int x=10,y=15;
    int *p,*q;
    p=&x;
    q=&y;
    printf("%d %d %d %d\n",x,*p,y,*q);
    p=q;
    printf("%d %d %d %d\n",x,*p,y,*q);
    *p=20;
    printf("%d %d %d %d\n",x,*p,y,*q);
}
