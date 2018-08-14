#include <stdio.h>
int main()
{
    int *file;
    file = fopen("file7.txt","r");
    int fl;
    fscanf(file,"%d",&fl);
    printf("%d\n",fl);
    return 0;
}
