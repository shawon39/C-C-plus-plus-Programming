#include<stdio.h>
int main()
{

    int n,j;

    while(1)
    {

        int sum =0;
        scanf("%d",&n);
        if(n==0)break;
        if(n%2!=0)n++;
            for(j=1; j<=5; j++)
            {
                sum = sum+n;
                n =n+2;
            }
            printf("%d\n",sum);

    }
    return 0;
}
