#include <stdio.h>
#include <string.h>
int main()
{
    int i,ln;
    char str[110];
    scanf("%s",str);
    ln=strlen(str);
    for(i=0; i<ln; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='y' || str[i]=='Y')
        {
            continue;
        }
        else
        {
            if(str[i]>=65 && str[i]<=90)
            {
                printf(".%c",str[i]+32);
            }
            else
            {
                printf(".%c",str[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
