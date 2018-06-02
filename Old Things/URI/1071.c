#include <stdio.h>
int main()
{
    int a,b,c=0,i,d=0,e=0;
    scanf("%d %d",&a,&b);

    if(a==b) printf("%d\n",c);

    else if(a>b)
    {
        for(i=b+1; i<a; i++)
        {
            if(i%2!=0) d=d+i;
        }
        printf("%d\n",d);
    }
    else if(a<b)
    {
        for(i=a+1; i<b; i++)
        {
            if(i%2!=0) e=e+i;
        }
        printf("%d\n",e);
    }

    return 0;
}
