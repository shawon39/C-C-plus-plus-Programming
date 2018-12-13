#include<stdio.h>
int main()
{
    int t,a,k,b,i,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
       int sum=0,p=0;
        scanf("%d %d",&a,&b);
        if(a%2!=0){
        for(j=0; j<b; j++)
        {

            sum = sum+a;
            a =a+2;


        }

        printf("%d\n",sum);
    }
    if(a%2==0){
            a ++;
        for(j=0; j<b; j++)
        {

            sum = sum+a;
              a = a+2;

        }

        printf("%d\n",sum);
    }
    }
 return 0;
}
