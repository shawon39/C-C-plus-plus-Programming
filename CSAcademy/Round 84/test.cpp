#include<stdio.h>
#include <string.h>

int main()
{
    int i, length,j;
    char name1[100],name2[100];
    scanf("%s %s", name1, name2);
    length=strlen(name1);

    for(i=0,j= length; name2[i]!='\0'; i++,j++)
    {
        name1[j]=name2[i];
    }
    name1[j]='\0';
    printf("%s\n", name1);
    return 0 ;
}
