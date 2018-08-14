#include <stdio.h>
int main()
{
    FILE *file_i;

    file_i = fopen("file.txt", "r");

    char s[100];

    fgets(s,100,file_i);

    puts(s);
}
