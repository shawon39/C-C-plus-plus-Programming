#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file,*file1,*file2;
    char ch[1000];

    file = fopen("file9.b.txt","w");
    gets(ch);
    fputs(ch,file);

    fclose(file);

    file1 = fopen("file9.b.txt", "r");
    file2 = fopen("file9.c.txt", "w");

    fgets(ch,1000,file1);
    fputs(ch,file2);

    fclose(file1);
    fclose(file2);

    return 0;
}
