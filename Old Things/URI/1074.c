#include <stdio.h>
int main()
{
    int T,num;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&num);

        if(num>0 && num%2==0) printf("EVEN POSITIVE\n");
        else if(num>0 && num%2==1) printf("ODD POSITIVE\n");

        else if(num<0 && num%2==0) printf("EVEN NEGATIVE\n");
        else if(num<0 && num%2==-1) printf("ODD NEGATIVE\n");

        else if(num==0) printf("NULL\n");

    }

    return 0;
}
