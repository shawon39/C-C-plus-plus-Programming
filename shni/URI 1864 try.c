#include<stdio.h>
#include<string.h>
int main()
{
    int i,m;
    char ch[50]="LIFE IS NOT A PROBLEM TO BE SOLVED";

    while(scanf("%d",&m)!=EOF)
    {
       for(i=0;i<m;i++)
       {
           printf("%c",ch[i]);
       }

       printf("\n");
    }
    return 0;
}

