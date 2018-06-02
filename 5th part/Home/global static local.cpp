#include <stdio.h>
#include <iostream>
using namespace std;
void lol(int);
void fun()
{
    int a = 10;
    static int s = 10;
    a+=2;
    s+=2;
    cout << a << " " << s << endl;
    lol(s);
}

void lol(int s)
{
    cout << s <<endl;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}

