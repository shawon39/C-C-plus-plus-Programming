#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main()
{
    char line[100];
    char str[100];
    gets(line);

    istringstream x (line);

    while (x >> str)
    {
        cout << str;
    }
}
