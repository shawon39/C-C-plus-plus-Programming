#include<stdio.h>
int main()
{
    int j,test,i,a,b,temp;
    scanf("%d",&test);
    for(j=1; j<=test; j++)
    {
        int sum=0;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        if(a%2==0)
        {
            for(i=a+1; i<b; i=i+2)
                sum = sum +i;
            printf("%d\n",sum);
        }
        else if(a%2!=0)

        {
            for(i=a+2; i<b; i=i+2)
                sum =  sum+i;
            printf("%d\n",sum);
        }

    }
    return 0;
}
