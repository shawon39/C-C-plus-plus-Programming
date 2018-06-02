#include <stdio.h>
int main()
{
    char str[100],strr[100];
    int i,n,length=0,length2=0,j,T;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        gets(str);
        gets(strr);
        for(i=0; str[i]!='\0'; i++)
        {
            length = length + 1;
        }
        for(i=0; strr[i]!='\0'; i++)
        {
            length2 = length2 + 1;
        }
        if(str>strr)
        {
            for(i=length-1; i>=0; i--)
            {
                printf("%c",str[i]);

            }
        }
        else
        {
            for(i=length2-1; i>=0; i--)
            {
                printf("%c",str[i]);
            }
        }
       // printf("\n");

    }
    return 0;
}
