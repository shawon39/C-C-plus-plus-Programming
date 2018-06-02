#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,length,j,T;
    scanf("%d",&T);
    getchar();
    for(j=1; j<=T; j++)
    {
        gets(str);
        length=strlen(str);

        for(i=0; i<length; i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-('a'-'A');
            }
        }
        printf("Case %d: %s\n",j,str);
    }
    return 0;
}
