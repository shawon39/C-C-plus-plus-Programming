#include<stdio.h>
#include<string.h>
int main()
{
    int i,ln;
    char ch[1000];
    while(scanf("%s",ch)!=EOF)
    {

        ln=strlen(ch);
        for(i=0; i<ln; i++)
        {
            printf("%c",ch[i]-7);
        }
        printf("\n");
    }
    return 0;
}
