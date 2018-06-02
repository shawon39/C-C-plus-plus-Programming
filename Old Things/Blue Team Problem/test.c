#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,p,a=0,b=0,c=0,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n,&p);
    a=pow((3*n),2) + pow(p,2);
    b=2*pow(n,2) + pow((5*p),2);
    c=(-100)*n + pow(p,3);

    if(a>b && a>c)
        printf("Rafael ganhou\n");
    else if(b>a && b>c)
        printf("Beto ganhou\n");
    else if(c>a && c>b)
        printf("Carlos ganhou\n");
    }
    return 0;
}
