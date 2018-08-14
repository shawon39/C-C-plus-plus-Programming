#include <stdio.h>
int count=1;
void recursion()
{
    char *s="I am Shawon !!!";
    printf("\n%d. ",count);
    puts(s);
    count++;
    recursion();
}
int main()
{
    recursion();
}
