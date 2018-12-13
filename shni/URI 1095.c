#include<stdio.h>
int main()
{
    int i,j;
    for(j=60,i=1;j>=0;j=j-5,i=i+3)
    {
        printf("I=%d J=%d\n",i,j);
    }
return 0;
}
