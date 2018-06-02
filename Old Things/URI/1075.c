/*#include <stdio.h>
int main()
{
    int N,a;
    scanf("%d",&N);
    for(a=2;a<=10000;a=a+N)
        printf ("%d\n",a);
    return 0;
}*/


#include <stdio.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);

    while(sum<10000)
    {
        if(sum<num)
        {
            printf("2\n");
            sum = sum + num + 2;
        }
        else
        {
            sum = sum + num;
        }
        if(sum<10000)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}


/*#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=10000; i++)
    {
        if(i%n==2)
            printf("%d\n",i);
    }
    return 0;
}
