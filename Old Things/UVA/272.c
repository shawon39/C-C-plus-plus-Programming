#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    long long int i,ln,count=0;
    while(gets(str))
    {
        ln=strlen(str);
        for(i=0; i<ln; i++)
        {
            if(str[i]=='"')
            {
                count++;
            }
            if(str[i]=='"' && count%2==0)
            {
                printf("''");
            }
            else if(str[i]=='"' && count%2==1)
            {
                printf("``");
            }
            else
            {
                printf("%c",str[i]);
            }
        }
         printf("\n");
    }
    return 0;
}

