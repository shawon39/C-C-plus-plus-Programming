#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    int n;
    cin >> n;
    fibo();

    for(int i=1; i<=n; i++)
    {
        int ct = 0;
        for(int j=1; j<=15; j++)
        {
            if( i == fib[j]){
                cout << "O";
                ct =1;
                break;
            }
        }
        if(ct!=1) cout << "o";
    }
   printf("\n");
    return 0;
}

