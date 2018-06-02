#include <stdio.h>
#include <string.h>
int main()
{
    char ch[200],xy;
    int i,t,size,j,f;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",ch);
        size=strlen(ch);
        xy=1,f=1;
        printf("Case %d:\n",i);
        while(f)
        {
            for(j=0; j<xy; j++)
            {
                printf("%c",ch[j]);
                if(xy==size) f=0;
            }
            xy++;
            printf("\n");
        }
    }
    return 0;
}
