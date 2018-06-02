#include <stdio.h>
#include <string.h>
int main()
{
    char str[1100];
    int i,sum,j=1;
    for(i=0; i<3; i++)
    {
        sum=0;
        str[0]='s';
        while(str[0]!='c')
        {
            gets(str);

            //if(str[0]=='-' && str[1]=='-' && str[2]=='*') sum+=1;
            //else if(str[0]=='-' && str[1]=='*' && str[2]=='-') sum+=2;
            //else if(str[0]=='-' && str[1]=='*' && str[2]=='*') sum+=3;
            //else if(str[0]=='*' && str[1]=='-' && str[2]=='-') sum+=4;
            //else if(str[0]=='*' && str[1]=='-' && str[2]=='*') sum+=5;
            //else if(str[0]=='*' && str[1]=='*' && str[2]=='-') sum+=6;
            //else if(str[0]=='*' && str[1]=='*' && str[2]=='*') sum+=7;

            if(strcmp(str,"--*")==0) sum+=1;
            else if (strcmp(str,"-*-")==0) sum+=2;
            else if (strcmp(str,"-**")==0) sum+=3;
            else if (strcmp(str,"*--")==0) sum+=4;
            else if (strcmp(str,"*-*")==0) sum+=5;
            else if (strcmp(str,"**-")==0) sum+=6;
            else if (strcmp(str,"***")==0) sum+=7;


        }
        printf("%d\n",sum);
    }
    return 0;
}
