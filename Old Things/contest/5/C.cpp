#include <stdio.h>
#include<bits/stdc++.h>
#include <string.h>
int main()
{
    int i,count,k;
    char word[2001];
    while(gets(word))
    {
        count=0,k=0;
        for(i=0; i<strlen(word); i++)
        {
            if( (k==0) && ( (word[k]>=65 && word[k]<=90) || (word[k]>=97 && word[k]<=122) ) )
            {
                count++;
                k=2;
            }
            else if(word[i]==' ' && ((word[i+1]>=65 && word[i+1]<=90 ) || (word[i+1]>=97 && word[i+1]<=122)) )
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

