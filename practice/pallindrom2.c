#include <stdio.h>
#include <string.h>

int main()
{
    char str[20],str2[20];
    int i,t,ln,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        ln=strlen(str);

        for(j=0,i=ln-1; i>=0; j++,i--)
        {
            str2[j]=str[i];
        }
        str2[j]='\0';

        if(strcmp(str,str2)==0) printf("Pallindrome\n");
        else printf("Not Pallindrome\n");
    }
}
