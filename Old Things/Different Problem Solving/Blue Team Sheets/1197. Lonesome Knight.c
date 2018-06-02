#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100], ch, ch2;
    int len, count,T;
    scanf("%d",&T);
    while(T--)
    {
        count = 0;
        scanf("%s",&input);

        ch = input[0] + 2;

        if(ch >= 'a' && ch<='h')
        {
            ch = input[1]-1;
            if(ch >= '1' && ch<='8')
            {
                count++;
            }
            ch = input[1]+1;
            if(ch >= '1' && ch<='8')
            {
                count++;
            }
        }
        ch = input[0] - 2;
        if(ch >= 'a' && ch<='h')
        {
            ch = input[1]-1;
            if(ch >= '1' && ch<='8')
            {
                count++;
            }
            ch = input[1]+1;
            if(ch >= '1' && ch<='8')
            {
                count++;
            }
        }

        ch2 = input[1] + 2;
        if(ch2 >= '1' && ch2<='8')
        {
            ch2 = input[0]-1;
            if(ch2 >= 'a' && ch2<='h')
            {
                count++;
            }
            ch2 = input[0]+1;
            if(ch2 >= 'a' && ch2<='h')
            {
                count++;
            }
        }
        ch2 = input[1] - 2;
        if(ch2 >= '1' && ch2<='8')
        {
            ch2 = input[0]-1;
            if(ch2 >= 'a' && ch2<='h')
            {
                count++;
            }
            ch2 = input[0]+1;
            if(ch2 >= 'a' && ch2<='h')
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
