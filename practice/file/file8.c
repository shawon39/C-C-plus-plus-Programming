#include <stdio.h>
#include <stdlib.h>
int main()
{
    int file;
    file = fopen("file8.txt","a");

    fprintf(file, "This is a another file !!\n");

    fclose(file);
    return 0;
}
