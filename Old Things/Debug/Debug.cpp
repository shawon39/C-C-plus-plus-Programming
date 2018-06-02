#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#define debug(x) cout << #x << " = " << (x) << endl /// For Debugging !

int main ()
{
    char str[80];
    int i;

    for(i=0; i<50; i++)
    {
        debug(i);    /// For Debugging !
    }

    return 0;
}

