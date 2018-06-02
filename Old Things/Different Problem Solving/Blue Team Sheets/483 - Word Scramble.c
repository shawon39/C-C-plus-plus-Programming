#include <stdio.h>
#include <string.h>
int main()
{
    char lol[1000];
    int i,j,len,count,m;
    while(gets(lol))
    {
        len = strlen(lol);
        count=0,m=0;

        for(i=0; i<=len; i++)
        {
            count++;
            if( lol[i] == ' ' || lol[i] == '\0' )
            {
                for(j=count-2; j>=m; j--)
                {
                    printf("%c",lol[j]);
                }
                m=count;
                if(lol[i] != '\0') printf(" ");
                else printf("\n");
            }
        }
    }
    return 0;
}
