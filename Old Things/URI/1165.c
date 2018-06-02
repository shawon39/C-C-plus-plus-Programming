#include <stdio.h>
int main()
{
    int T,num,i,prime;
    scanf("%d",&T);
    while(T--)
    {
        prime=1;
        scanf("%d",&num);

        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                prime=0;
                break;
            }
        }

        if(prime==1) printf("%d eh primo\n",num);
        else printf("%d nao eh primo\n",num);
    }
    return 0;
}

