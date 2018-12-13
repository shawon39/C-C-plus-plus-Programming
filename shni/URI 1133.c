#include<stdio.h>
int main()
{
    int i,m,n,temp;
    scanf("%d %d",&m,&n);
    if (m>n)
    {
        temp =m;
        m=n;
        n= temp;
    }
    for(i=m+1;i<n;i++)
    {
        if((i%5==2) || (i%5==3))
        {
            printf("%d\n",i);
        }
    }
    return 0;

}
