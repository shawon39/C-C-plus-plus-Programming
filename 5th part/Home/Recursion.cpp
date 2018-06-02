#include <stdio.h>
#include <iostream>
using namespace std;

string lol = "Shakhawat";
int i=0,len=lol.length();
int l = len;
string str;

string fun(string lol)
{
    if(i==l){return "";}
    str+=lol[len-1];
    i++;
    len--;
    fun(lol);
    return str;
}

int main()
{
    cout << fun(lol) << endl;
    return 0;
}
