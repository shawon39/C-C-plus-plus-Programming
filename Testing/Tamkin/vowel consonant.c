#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s", str);

    int i, len=strlen(str);
    int v=0, c=0, d=0, sp=0;

    for(i=0; i<len; i++)
    {
        if( str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ) v++;
        else if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) v++;

        else if( str[i] >= 'A' && str[i] <= 'Z' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' ) c++;
        else if( str[i] >= 'a' && str[i] <= 'z' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' ) c++;

        else if( str[i] >='0' && str[i] <= '9' ) d++;

        else sp++;
    }

    printf("%d %d %d %d\n", v, c, d, sp);

    return 0;
}
