#include <stdio.h>
int main()
{
    char str[100];
    int i,length=0;    //I love My country'\0'

    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        length = length + 1;
    }
    printf("Length of %s is: %d\n",str,length);
    return 0;
}
