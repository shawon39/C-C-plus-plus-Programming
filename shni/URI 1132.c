#include<stdio.h>
int main()
{

    int m,n,i,temp,sum=0;
    scanf("%d %d",&m,&n);

    if (m>n)
    {
        temp =m;
        m=n;
        n= temp;
    }
    for(i=m;i<=n;i++)
    {

        if(i%13!=0)
        {
            sum = sum+i;

        }

    }
    printf("%d\n",sum);
    return 0;

}

