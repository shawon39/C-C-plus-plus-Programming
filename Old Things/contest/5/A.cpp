#include <stdio.h>
#include<bits/stdc++.h>
#include <string.h>

int main()
{
    char st[101],ch;
    int t,i,j=0,count;
    scanf("%d%c",&t,&ch);
    while(t--)
    {
        count=0;
         gets(st);
         for(i=0; i<strlen(st); i++)
         {
             if(st[i]=='a' || st[i]=='d' || st[i]=='g' || st[i]=='j' || st[i]=='m' || st[i]=='p' || st[i]=='t' || st[i]=='w' || st[i]==' ') count+=1;
             else if(st[i]=='b' || st[i]=='e' || st[i]=='h' || st[i]=='k' || st[i]=='n' || st[i]=='q' || st[i]=='u' || st[i]=='x') count+=2;
             else if(st[i]=='c' || st[i]=='f' || st[i]=='i' || st[i]=='l' || st[i]=='o' || st[i]=='r' || st[i]=='v' || st[i]=='y') count+=3;
             else if(st[i]=='s' || st[i]=='z') count+=4;
        }
        printf("Case #%d: %d\n",++j,count);
    }
    return 0;
}
