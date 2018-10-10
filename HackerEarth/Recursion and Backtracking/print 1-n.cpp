#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if( n == 10 ) return 10;
    return fun(n+1) + n ;
}

int main()
{
    cout << fun(1);
}
