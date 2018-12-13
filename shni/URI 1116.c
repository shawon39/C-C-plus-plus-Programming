#include<stdio.h>
int main()
{
    int test,i;
    float m,n;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%f %f",&m,&n);
        if(n==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n",(m/n));
        }
    }
    return 0;
}
