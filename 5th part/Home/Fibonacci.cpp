#include <iostream>
#include <stdio.h>
#define pf(x) printf("%d\n",x)
using namespace std;

int cnt;
int fib(int num)
{
    cnt++;
    if( num == 1 || num==2 ){
        return 1;
    }
    return fib(num-1) + fib(num-2);
}

int main()
{
    cout << fib(6) <<endl;
    pf(cnt);
    return 0;
}

