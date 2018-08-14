#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void *memset(void *s, int c, size_t n);

int main()
{
    char str[] = "Hello I am a Programmer!";
    memset (str,'*',5);
    puts(str);
    return 0;
}
