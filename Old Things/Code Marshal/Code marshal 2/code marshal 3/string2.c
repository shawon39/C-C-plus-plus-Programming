#include <stdio.h>
int main()
{
    char str[30]="Shakh",st[30]="awat";
    int i,j,length=5;

    for(i=length,j=0;st[j]!='\0';i++,j++)
    {
        str[i]=st[j];
    }
    str[i]='\0';
    printf("%s\n",str);
    return 0;
}
