#include<stdio.h>
int main()
{
    int i,t,array[100],mini,p;

    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&array[i]);
    }
    mini = array[0];
    p = 1;

    for(i=1; i<t; i++)
    {
        if (array[i]<mini)
        {

            mini = array[i];
        }
    }
    printf("%d\n",mini);
    printf("%d\n",p);
    return 0;

}
