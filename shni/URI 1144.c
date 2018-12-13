#include<stdio.h>
int main()
{
    int i,m;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
         printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);

    }
    return 0;
}
