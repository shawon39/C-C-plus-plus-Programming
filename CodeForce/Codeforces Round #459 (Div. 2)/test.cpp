#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int fib[1010];
int a = 0, b = 1, c;

void fibo()
{
    for(int i=1; i<=15; i++)
    {
        c = a+b;
        a = b;
        b = c;
        fib[i] = b;
    }
}

bool check(int key)
{
    for(int j=1; j<=15; j++)
    {
        if( key == fib[j])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    fast;
    int n; cin >> n; fibo();

    for(int i=1; i<=n; i++)
    {
        (check(i))? cout << "O" : cout <<"o";
    }
    printf("\n");
    return 0;
}

