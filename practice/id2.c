#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='-')
        continue;
        printf("%s"str);
    }
    return 0;
}
