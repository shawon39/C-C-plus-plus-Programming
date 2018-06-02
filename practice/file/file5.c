/**#include <stdio.h>
int main()
{
    freopen("intt.txt", "rt", stdin);
    freopen("outt.txt", "wt", stdout);
    int i;
    for(i=1;i<=10000000000000000000000000000000000000000000000000;i++)
    {
        printf("%d\n",i);
    }
}
*/

#include <stdio.h>
int main()
{
    FILE *file_i;

    file_i = fopen("file5.txt", "r");

    int i;

    for(i=0; i<=100000000; i++)
    {
        fprintf(file_i,"%d\n",i);
    }
}
