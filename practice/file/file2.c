#include <stdio.h>
int main()
{
    FILE *output_file;
    output_file = fopen("text_file/file.txt", "w");
    char input[100];
    gets(input);
    fputs(input,output_file);
    return 0;
}
