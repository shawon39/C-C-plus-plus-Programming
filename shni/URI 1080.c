#include<stdio.h>
int main()
{
    int i,a,j=0,p;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a);
        if(a>j)
        {
            j=a;
            p=i;
        }
    }
printf("%d\n%d\n",j,p);

}
