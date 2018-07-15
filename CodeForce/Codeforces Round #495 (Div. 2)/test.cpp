#include <stdio.h>
int main()
{
    char ch, ch2;
    scanf("%c %c", &ch, &ch2);

    for(int i=ch; i<=ch2; i++)
    {
        printf("%c = %d\n", i,i);
    }
    return 0;
}
