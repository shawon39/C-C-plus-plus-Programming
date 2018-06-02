#include <stdio.h>
int main()
{
    int num[1000],i,k=0;

    for(i=0; i<15; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<10; i++)
    {
        if(num[i]%2==0) printf("par[%d] = %d\n",k++,num[i]);

        if(k==5)
        {
            k=0;
            break;
        }
    }
    k=0;
    for(i=0; i<10; i++)
    {
        if(num[i]%2!=0) printf("impar[%d] = %d\n",k++,num[i]);

        if(k==5)
        {
            k=0;
            break;
        }
    }
    k=0;
    for(i=10; i<15; i++)
    {
        if(num[i]%2!=0) printf("impar[%d] = %d\n",k++,num[i]);

        if(k==5)
        {
            k=0;
            break;
        }
    }
    k=0;
    for(i=10; i<15; i++)
    {
        if(num[i]%2==0) printf("par[%d] = %d\n",k++,num[i]);

        if(k==5)
        {
            k=0;
            break;
        }
    }
    return 0;

}
