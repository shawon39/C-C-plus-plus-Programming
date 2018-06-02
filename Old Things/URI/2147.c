#include <stdio.h>
#include <string.h>
int main()
{
    char st[10000];
    int i,t,s;
    double count;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%s",st);
        s=strlen(st);
        for(i=0; i<s; i++)
        {
            count++;
        }
        printf("%.2lf\n",count/100);
    }
    return 0;
}
