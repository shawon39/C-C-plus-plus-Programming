#include<stdio.h>
int main()
{
    int i,t,m,max;
while(scanf("%d",&t)!=EOF)
{
    for(i=0,max=0;i<t;i++)
    {
        scanf("%d",&m);
        if(m>max)
        {
            max = m;
        }
    }

    if(max<10)
    {
        printf("1\n");
    }
     else if(max>=10 && max<20)
    {
        printf("2\n");
    }
   else
    {
        printf("3\n");
    }

}
return 0;

}
