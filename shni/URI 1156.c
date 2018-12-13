#include<stdio.h>
int main()
{
    int i,a=1,b=1;
    float s=0.0;

    for(i=1;i<=20;i++)
    {
        s += (a/b);
        a = (a+2);
        b = (b*2);
    }
    printf("%.2f\n",s);
    return 0;
}
