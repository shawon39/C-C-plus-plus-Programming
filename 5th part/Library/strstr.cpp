#include <stdio.h>
#include <string.h>


int main ()
{
    char haystack[20] = "TutorialsPoint";
    char needle[10] = "Point";
    char *ret;

    ret = strstr(haystack, needle);

    printf("%s\n", ret);

    return 0;
}
