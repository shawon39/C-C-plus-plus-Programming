#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char ch[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",ch);
        if(strcmp(ch,"one")==0 || (ch[0]=='o' && ch[1]=='n') || (ch[0]=='o' && ch[2]=='e') || (ch[1]=='n' && ch[2]=='e') ) printf("1\n");
        else if(strcmp(ch,"two")==0 || (ch[0]=='t' && ch[1]=='w') || (ch[0]=='t' && ch[2]=='o') || (ch[1]=='w' && ch[2]=='o') ) printf("2\n");
        else printf("3\n");
    }
    return 0;
}
