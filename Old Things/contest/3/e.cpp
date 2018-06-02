#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char abc[50];
    int i,ln;
    while(scanf("%s",abc)!=EOF)
    {
        ln=strlen(abc);
        for(i=0; i<ln; i++)
        {
             if(isdigit(abc[i])!=0 || abc[i]=='-')
             {
                 printf("%c",abc[i]);
             }
             else if(abc[i]=='A' || abc[i]=='B'  || abc[i]=='C') printf("2");
             else if(abc[i]=='D' || abc[i]=='E'  || abc[i]=='F') printf("3");
             else if(abc[i]=='G' || abc[i]=='H'  || abc[i]=='I') printf("4");
             else if(abc[i]=='J' || abc[i]=='K'  || abc[i]=='L') printf("5");
             else if(abc[i]=='M' || abc[i]=='N'  || abc[i]=='O') printf("6");
             else if(abc[i]=='P' || abc[i]=='Q'  || abc[i]=='R' || abc[i]=='S') printf("7");
             else if(abc[i]=='T' || abc[i]=='U'  || abc[i]=='V') printf("8");
             else if(abc[i]=='Y' || abc[i]=='W'  || abc[i]=='X' || abc[i]=='Z') printf("9");
        }
        printf("\n");
    }
    return 0;
}
