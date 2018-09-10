#include <stdio.h>
#include <string.h>
int main()
{
     char ch[100], ch2[100];
     scanf("%s %s", ch, ch2);

    int i,j, len = strlen(ch), len2 = strlen(ch2);

    ch[len] = ' ';
    for(i=0, j=len+1; i<len2; i++, j++)
    {
        ch[j] = ch2[i];
    }
    ch[j] = '\0';
    printf("%s", ch);

    //strcat(ch,ch2);
    //printf("%s", ch);

    return 0;
}

